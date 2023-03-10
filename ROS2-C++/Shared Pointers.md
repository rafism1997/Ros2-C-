
Shared pointer is a smart pointer that retains shared ownership of an object through a pointer.

For C++- ROS2 shared pointers are used extensively and the main advantage of it is that we don't need to manually delete it when the pointer goes out of scope. the node gets destroyed once the pointer goes out of scope. 


```C++
#include "rclcpp/rclcpp.hpp"

int main(int argc , char **argv){

rclcpp::init(argc,argv);

auto node = std::make_shared<rclcpp::Node>("cpp_test");

rclcpp::shutdown();

return 0;

}
```

