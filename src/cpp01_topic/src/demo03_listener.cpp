/*  
    Demand: Subscribe messages which are published by transfer node and show them in the terminal
*/

#include "rclcpp/rclcpp.hpp"
#include "base_interfaces_demo/msg/input_iparaapi_fnct.hpp"

using std::placeholders::_1;
using base_interfaces_demo::msg::InputIPARAAPIFnct;
// Define class of subscription node;
class ListenerOut : public rclcpp::Node
{
  public:
    ListenerOut()
    : Node("listener_node_cpp")
    {
      // Create subscription;
      subscription_ = this->create_subscription<InputIPARAAPIFnct>("park_api_req", 10, std::bind(&ListenerOut::do_cb, this, _1));
    }

  private:
    // Deal with subscribed messages;
    void do_cb(const InputIPARAAPIFnct & output) const
    {
      RCLCPP_INFO(this->get_logger(), "Output:change_gear_position=%d,accel_des=%.2f,steering_angle=%.2f", output.change_gear_position,output.accel_des,output.steering_angle);
    }
    rclcpp::Subscription<InputIPARAAPIFnct>::SharedPtr subscription_;
};

int main(int argc, char * argv[])
{
  // Initialization;
  rclcpp::init(argc, argv);
  // spin;
  rclcpp::spin(std::make_shared<ListenerOut>());
  rclcpp::shutdown();
  return 0;
}