#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

# from geometry_msgs.msg import TransformStamped
import math

from vehicle_msg.msg import Vehiclepose 
from vehicle_msg.msg import VehicleInput 

class posepub(Node):
    def __init__(self):
        super().__init__('posepub')

        self.u1 = 0.0
        self.u2 = 0.0
        self.x_old = 0.0
        self.y_old = 0.0
        self.theta_old = 0.0
        self.x_dot = 0.0
        self.y_dot = 0.0
        self.theta_dot = 0.0  
        self.L = 2
        self.freq = 20
        self.dt = 1/self.freq

        # Subscribes to input x , y , theta
        self.sub_pose = self.create_subscription(Vehiclepose, 'Vehiclepose', self.Vehiclepose_callback, 10)

        # Subscribes to input u1 and u2
        self.sub_input = self.create_subscription(VehicleInput, 'VehicleInput', self.VehicleInput_callback, 10)

        # publish new x, y, theta
        self.publisher_ = self.create_publisher(Vehiclepose, 'Vehiclepose', 10)
        timer_period = 1/self.freq  # seconds
        self.timer = self.create_timer(timer_period, self.vehicle_pose_pub)


    def Vehiclepose_callback(self, msg):       
        self.x_old = msg.x
        self.y_old = msg.y
        self.theta_old = msg.theta 

    def VehicleInput_callback(self, msg):
        self.u1 = msg.vref
        self.u2 = msg.steerangle
        self.x_dot = self.u1 * math.cos(self.theta_old)
        self.y_dot = self.u1 * math.sin(self.theta_old)
        self.theta_dot =  (self.u2/self.L)*math.tan(self.u2)

    def vehicle_pose_pub(self):
        msg = Vehiclepose()
        msg.x = self.dt*self.x_dot + self.x_old
        msg.y = self.dt*self.y_dot + self.y_old
        msg.theta = self.dt*self.theta_dot + self.theta_old
        self.publisher_.publish(msg)
        # self.get_logger().info('Publishing: "X: %s Y: %s theta: %s"' % (msg.x , msg.y, msg.theta))
        



def main(args=None):
    rclpy.init(args=args)
    node = posepub()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == '__main__':
    main()
