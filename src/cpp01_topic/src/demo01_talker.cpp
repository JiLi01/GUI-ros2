/*  
  Demand：Publish messages the test node should subscribe;
*/

#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/msg/output_iparaapi_fnct.hpp"

using namespace std::chrono_literals;
using base_interfaces_demo::msg::OutputIPARAAPIFnct;

class TalkerIn : public rclcpp::Node
{
  public:
    TalkerIn()
    : Node("talker_node_cpp", rclcpp::NodeOptions().allow_undeclared_parameters(true)), count_(0)
    {
      this->declare_parameter("Fahrer_bremst",1); 
      // Create publisher；
      publisher_ = this->create_publisher<OutputIPARAAPIFnct>("park_api_resp", 10);
      // Define how often messages would be published；
      timer_ = this->create_wall_timer(500ms, std::bind(&TalkerIn::on_timer, this));
    }
    // declare parameters and set default values；
    void declare_param(){
      this->declare_parameter("Fahrer_bremst",1); 
      this->declare_parameter("Fahrzeugzustand",2); 
      this->declare_parameter("Heartbeat_out",3); 
      this->declare_parameter("GearChangePossible",4);
      this->declare_parameter("EmergencyBreak",5); 
      this->declare_parameter("StatusFehler",6);} 

  private:
    void on_timer()
    {
      // Content that should be published (assign the value of parameters to that of messages);
      auto input = OutputIPARAAPIFnct();
      /*
      input.driver_override_speed = this->get_parameter("Fahrer_bremst").as_int();
      input.fahrzeug_zustand = this->get_parameter("Fahrzeugzustand").as_int();
      input.heartbeat_out = this->get_parameter("Heartbeat_out").as_int();
      input.gear_change_possible = this->get_parameter("GearChangePossible").as_int();
      input.status_emergency_stop = this->get_parameter("EmergencyBreak").as_int();
      input.fehlerzustand = this->get_parameter("StatusFehler").as_int();
      RCLCPP_INFO(this->get_logger(), "Iuput:driver_override_speed=%d,fahrzeug_zustand=%d,heartbeat_out=%d", input.driver_override_speed,input.fahrzeug_zustand,input.heartbeat_out);
      publisher_->publish(input);
      */
      input.driver_override_speed = 1;
      input.fahrzeug_zustand = 2;
      input.heartbeat_out = 3;
      input.gear_change_possible = 4;
      input.status_emergency_stop = 5;
      input.fehlerzustand = 6;
      this->set_parameter(rclcpp::Parameter("Fahrer_bremst", input.driver_override_speed));
      RCLCPP_INFO(this->get_logger(), "Iuput:driver_override_speed=%d,fahrzeug_zustand=%d,heartbeat_out=%d", input.driver_override_speed,input.fahrzeug_zustand,input.heartbeat_out);
      RCLCPP_INFO(this->get_logger(), "刹车=%ld", this->get_parameter("Fahrer_bremst").as_int());
      publisher_->publish(input);

    }

   
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<OutputIPARAAPIFnct>::SharedPtr publisher_;
    int count_;
};

int main(int argc, char * argv[])
{
  
  //Initialization;
  rclcpp::init(argc, argv);
  
  // spin;
  auto node = std::make_shared<TalkerIn>();
  //node->declare_param();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}