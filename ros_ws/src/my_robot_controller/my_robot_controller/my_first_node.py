#!/usr/bin/env python3

import rclpy
from rclpy.node import Node

class myNode(Node):
    n = 0
    def __init__(self,name="hemanshu"):
        super().__init__("firstNode")
        self.get_logger().info("ROS2 hummble started")
        print(f"My name is {name} and i am a robot")
        self.create_timer(1.0,self.timer)
    def timer(self):
        if(self.n!=11) : 
         self.get_logger().info(f"self distruction initiated, destroying in {10-self.n}")
         self.n = self.n+1
        else :
         self.get_logger().info(f"Just joking")
         self.n=0

def main(args=None):
    rclpy.init(args=args)
    node = myNode("roshani")
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__' :
    main()
    
