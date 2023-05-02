To be added soon...
1: The workstation " h04_ws_vROS2" is created including the packages "vehicle model" and "vehicle_msgs". A package in ros2 can be created using the following example "ros2 pkg create vehicle model"

Please note that the structure of the ROS2 packages are different which required some effort prepare the ROS2/foxy version.

P2: 
To build and source:
colcon build --packages-select vehiclemodel vehicle_msg 
source install/setup.bash 

To publish the coordination values: 
ros2 topic pub /Vehiclepose vehicle_msg/msg/Vehiclepose  "{x: 1.0, y: 0.0, theta: 0.0}"

    Note 1: There is certain structure for naming the msg files. So 2D was removed and begins with capital letter.
    
    Note 2: After a lot of research and unsuccessful builds, I noticed there is a problem with build error when using ament_python_install_package() and generated interfaces #141 
    https://github.com/ros2/rosidl_python/issues/141
    Therefore I decided to seperately build a package .msg files and declare dependency through the main package.

To run the executable node: 
ros2 run vehiclemodel utils.py

To run the launch file:
ros2 launch vehiclemodel display.launch.py

To use the rtq:
rqt_graph



