#include "rclcpp/rclcpp.hpp"

class NewNode : public rclcpp::Node
{
public:
    NewNode() : Node("cpp_test"), counter_(0)// initialization of the counter should also be done here
    {
        RCLCPP_INFO(this->get_logger(), "Hello cpp Node");

        timer_ = this->create_wall_timer(std::chrono::seconds(1),
                                         std::bind(&NewNode::timerCallback, this));
    }

private:
    void timerCallback()
    {
        counter_++;// whenever timerCallback function is called it will increment the existing counter 
        RCLCPP_INFO(this->get_logger(), "Hello %d",counter_);
    }

    rclcpp::TimerBase::SharedPtr timer_;
    int counter_;
};
int main(int argc, char **argv)

{

    rclcpp::init(argc, argv);
    auto node = std::make_shared<NewNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}