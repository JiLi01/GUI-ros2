/*  
    Demand:Creation of a node (manual control of IPA/RPA) which is:
      Subscriping topics from parking and visualizing values in GUI (Msg: OutputIPARAAPIFnct.msg);
      Publishing topics to parking based on manual inputs in GUI (Msg: InputIPARAAPIFnct.msg);
      After starting all three nodes, use rqt to change the value of variables;
*/

#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/msg/input_iparaapi_fnct.hpp"
#include "base_interfaces_demo/msg/output_iparaapi_fnct.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;
using base_interfaces_demo::msg::InputIPARAAPIFnct;
using base_interfaces_demo::msg::OutputIPARAAPIFnct;
// Define class of the transfer node;
class Transfer : public rclcpp::Node
{
  public:
    // Declare parameters and set default value；
    void declare_param(){
      RCLCPP_INFO(this->get_logger(),"---update----");
      auto acc_descriptor = rcl_interfaces::msg::ParameterDescriptor{};
      acc_descriptor.floating_point_range.resize(1);
      acc_descriptor.floating_point_range[0].from_value = 1.1;
      acc_descriptor.floating_point_range[0].to_value = 4.4;
      this->declare_parameter("accel_des",2.2, acc_descriptor);
      // Variables which should be subscribed;
      this->declare_parameter("Fahrer_bremst",1); 
      this->declare_parameter("Fahrzeugzustand",2); 
      this->declare_parameter("Heartbeat_out",3); 
      this->declare_parameter("GearChangePossible",4);
      this->declare_parameter("EmergencyBreak",5); 
      this->declare_parameter("StatusFehler",6);
      // Variables which should be published;
      this->declare_parameter("change_gear_position",1);
      //this->declare_parameter("accel_des",2.2); 
      this->declare_parameter("steering_angle",3.3); 
      this->declare_parameter("turn_signal",4);
      this->declare_parameter("emergency_break",5); 
      this->declare_parameter("heartbeat_in",6);
      this->declare_parameter("startabfrage",7);}
    Transfer()
    : Node("transfer_node_cpp", rclcpp::NodeOptions().allow_undeclared_parameters(true)), counter_(0)
    {
      // Create subscription；
      subscription_ = this->create_subscription<OutputIPARAAPIFnct>("park_api_resp", 10, std::bind(&Transfer::do_cb, this, _1));
      // Create publisher;
      publisher_ = this->create_publisher<InputIPARAAPIFnct>("park_api_req", 10);
      // Define the frequency with which messages would be published;
      timer_ = this->create_wall_timer(500ms, std::bind(&Transfer::on_timer, this));
    }
    
  private:
    // Deal with subscribed messages;
    void do_cb(const OutputIPARAAPIFnct & input)
    {
      RCLCPP_INFO(this->get_logger(), "Iuput:Fahrer_bremst=%d,fahrzeug_zustand=%d,heartbeat_out=%d", input.driver_override_speed,input.fahrzeug_zustand,input.heartbeat_out);
      this->set_parameter(rclcpp::Parameter("Fahrer_bremst", input.driver_override_speed));
      this->set_parameter(rclcpp::Parameter("Fahrzeugzustand", input.fahrzeug_zustand));
      this->set_parameter(rclcpp::Parameter("Heartbeat_out", input.heartbeat_out));
      this->set_parameter(rclcpp::Parameter("GearChangePossible", input.gear_change_possible));
      this->set_parameter(rclcpp::Parameter("EmergencyBreak", input.status_emergency_stop));
      this->set_parameter(rclcpp::Parameter("StatusFehler", input.fehlerzustand));
    }
    void on_timer()
    {
      // Content that should be published (assign the value of parameters to that of messages);
      auto output = InputIPARAAPIFnct();
      
      //assign the calculated value to parameters;
      output.change_gear_position = this->get_parameter("change_gear_position").as_int();
      output.accel_des = this->get_parameter("accel_des").as_double();
      output.steering_angle = this->get_parameter("steering_angle").as_double();
      output.turn_signal = this->get_parameter("turn_signal").as_int();
      output.emergency_break = this->get_parameter("emergency_break").as_int();
      output.heartbeat_in = this->get_parameter("heartbeat_in").as_int();
      output.startabfrage = this->get_parameter("startabfrage").as_int();
      
     /*
      output.change_gear_position = 2;
      output.accel_des = 3.0;
      output.steering_angle = 4.8;
      output.turn_signal = 5;
      output.emergency_break = 6;
      output.heartbeat_in = 7;
      output.startabfrage = 8;
      this->set_parameter(rclcpp::Parameter("change_gear_position", output.change_gear_position));
      this->set_parameter(rclcpp::Parameter("accel_des", output.accel_des));
      this->set_parameter(rclcpp::Parameter("steering_angle", output.steering_angle));
      this->set_parameter(rclcpp::Parameter("turn_signal", output.turn_signal));
      this->set_parameter(rclcpp::Parameter("emergency_break", output.emergency_break));
      this->set_parameter(rclcpp::Parameter("heartbeat_in", output.heartbeat_in));
      this->set_parameter(rclcpp::Parameter("startabfrage", output.startabfrage));*/
      publisher_->publish(output);
    }
    rclcpp::Subscription<OutputIPARAAPIFnct>::SharedPtr subscription_;
    rclcpp::Publisher<InputIPARAAPIFnct>::SharedPtr publisher_;
    int counter_;
    rclcpp::TimerBase::SharedPtr timer_;
    
};

int main(int argc, char * argv[])
{
  // Initialization;
  rclcpp::init(argc, argv);
  // spin;
  auto transfer_node = std::make_shared<Transfer>();
  transfer_node->declare_param();
  rclcpp::spin(transfer_node);
  rclcpp::shutdown();
  return 0;
}