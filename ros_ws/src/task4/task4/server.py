import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from custom_msgs.action import CountDown
import time

class server(Node):
    def __init__(self):
        super().__init__("action_server")
        self.server = ActionServer(self,CountDown,"count_down",self.execute_callback)

    def execute_callback(self,goal_handle):
        target = goal_handle.request.target
        feedback_msg = CountDown.Feedback()
        for i in range(0,target) :
            feedback_msg.current_count = i
            self.get_logger().info(f"feedback : {i}")
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)
        goal_handle.succeed()
        result = CountDown.Result()
        result.status = "Done"
        return result

def main(args=None):
    rclpy.init(args=args)
    ser = server()
    rclpy.spin(ser)
    rclp.shutdown()

if __name__ == "main":
    main()

