/*
 * project   : https://github.com/Robin005cr/ros2cpp
 * file name : simple_publisher.cpp
 * author    : Robin CR
 * mail id   : robinchovallurraju@gmail.com
 * LinkedIn  : https://www.linkedin.com/in/robin-cr/
 * portfolio : https://robin005cr.github.io/
 *
 * Note : If any mistakes, errors, or inconsistencies are found in the code, please feel free to mail me.
 * Suggestions for improvements or better methods are always welcome and appreciated.
 * I value constructive feedback and aim to continuously improve the quality of the work.
 *
 */
#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp> // interface type should be included

class SimplePublisher : public rclcpp::Node // This node should be inherited creation of Node 
{
public:
    SimplePublisher() : Node("Simple_Publisher") // Name of the node
    {
    }

private:
    unsigned int counter; // count the no. of messages published in ros2 topic
};

int main()
{

    return 0;
}