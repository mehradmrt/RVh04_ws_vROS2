#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

import tf2_ros
from geometry_msgs.msg import TransformStamped
from scipy.spatial.transform import Rotation as R

from vehicle_msg.msg import Vehiclepose

class Utils(Node):
    def __init__(self):
        super().__init__('utils', namespace='')
        self.br = tf2_ros.TransformBroadcaster(self)

        # Initializes vehicle position
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = "world"
        t.child_frame_id = "base_link"
        t.transform.translation.x = 1.0
        t.transform.translation.y = 0.0
        t.transform.translation.z = 0.0
        # q = tf2_ros.transformations.quaternion_from_euler(0.0, 0.0, 0.0)
        # t.transform.rotation.x = q[0]
        # t.transform.rotation.y = q[1]
        # t.transform.rotation.z = q[2]
        # t.transform.rotation.w = q[3]
        q = R.from_euler('xyz',[0.0, 0.0, 1.57075])
        t.transform.rotation.x = q.as_quat()[0]
        t.transform.rotation.y = q.as_quat()[1]
        t.transform.rotation.z = q.as_quat()[2]
        t.transform.rotation.w = q.as_quat()[3]
        self.br.sendTransform(t)

        # Subscribes to vehicle position and orientation message
        self.sub = self.create_subscription(Vehiclepose, 'Vehiclepose', self.callback_vehicle2Dpose, 10)

    # Republishes vehicle position and orientation message using tf
    def callback_vehicle2Dpose(self, msg):
        t = TransformStamped()
        t.header.stamp = self.get_clock().now().to_msg()
        t.header.frame_id = "world"
        t.child_frame_id = "base_link"
        t.transform.translation.x = msg.x
        t.transform.translation.y = msg.y
        t.transform.translation.z = 0.0
        # q = tf2_ros.transformations.quaternion_from_euler(0.0, 0.0, msg.theta)
        q = R.from_euler('xyz',[0,0,msg.theta])
        # t.transform.rotation.x = q[0]
        # t.transform.rotation.y = q[1]
        # t.transform.rotation.z = q[2]
        # t.transform.rotation.w = q[3]
        t.transform.rotation.x = q.as_quat()[0]
        t.transform.rotation.y = q.as_quat()[1]
        t.transform.rotation.z = q.as_quat()[2]
        t.transform.rotation.w = q.as_quat()[3]
        self.br.sendTransform(t)


def main(args=None):
    rclpy.init(args=args)
    node = Utils()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()


