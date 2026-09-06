import rclpy

from rclpy.node import Node
from rclpy.action import ActionClient

from custom_msgs.action import Nav


class CountClient(Node):

    def __init__(self):
        super().__init__("action_client")
        self.client = ActionClient(self,Nav,"/track_goal")

    def send_goal(self):
        goal_msg = Nav.Goal()
        goal_msg.x = 10
        goal_msg.y = 5
        self.client.wait_for_server()
        self.future = self.client.send_goal_async(goal_msg,self.feedbackCallback)
        self.future.add_done_callback(self.goalResponseCallback)

    def goalResponseCallback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info(f"Goal no accepted!!")
            return
        self.get_logger().info(f"Goal accepted")
        self.result = goal_handle.get_result_async()
        self.result.add_done_callback(self.resultCallback)

    def resultCallback(self, future):
        result = future.result().result
        self.get_logger().info(f"result : {result.status}")
        rclpy.shutdown()
    def feedbackCallback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info(
            f"feedback : {feedback.left}"
        )


def main(args=None):
    rclpy.init(args=args)
    client = CountClient()
    client.send_goal()
    rclpy.spin(client)


if __name__ == "__main__":
    main()






