#include "rclcpp/rclcpp.hpp"

class MycustomNode :public rclcpp::Node // can change the name of the node to a custom one
{
    public:
    {
        MycustomNode() : Node("New_Node") //Modify Name
    }
    private: 

};
int main(int argc, char **argv){
    rclcpp::init(argc,argv);
    auto node= std::make_shared<MycustomNode>();
    rclcpp::shutdown();
    return 0;
}