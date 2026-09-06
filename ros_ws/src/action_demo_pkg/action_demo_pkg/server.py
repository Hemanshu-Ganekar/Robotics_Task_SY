import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from custom_msgs.action import Nav
import time

class server(Node):
    def __init__(self):
        super().__init__("action_server")
        self.server = ActionServer(self,Nav,"/track_goal",self.execute_callback)
        
    def execute_callback(self,goal_handle):
        feedback_msg = Nav.Feedback()
        for i in range(0,10) :
            feedback_msg.left = "Distance left : 0.5m"
            self.get_logger().info(f"Distance left : 0.5m")
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)
        goal_handle.succeed()
        result = Nav.Result()
        result.status = "Goal completed"
        return result

def main(args=None):
    rclpy.init(args=args)
    ser = server()
    rclpy.spin(ser)
    rclp.shutdown()

if __name__ == "main":
    main()




