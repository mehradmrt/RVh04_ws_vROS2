
1: The workstation " h04_ws_vROS2" is created including the packages "roboticvehicles_ros1", "roboticvehicles_ros2" and "vehicle_msgs". A package in ros2 can be created using the following example:
    "ros2 pkg create vehiclemodel"

Please note that the structure of the ROS2 packages are different which required some effort to prepare the ROS2/foxy version.

Please use source workspce at all times using: source /opt/ros/foxy/setup.bash

or use : gedit ~/.bashrc    and add " source /opt/ros/foxy/setup.bash " to the end of the script

P2: 
To build and source:

    colcon build --packages-select roboticvehicles_ros2 vehicle_msg 
    
    source install/setup.bash 

To publish the coordination values: 

ros2 topic pub /Vehiclepose vehicle_msg/msg/Vehiclepose  "{x: 1.0, y: 0.0, theta: 0.0}"

Note 1: There is certain structure for naming the msg files. So 2D was removed and begins with capital letter.
    
Note 2: After a lot of research and unsuccessful builds, I noticed there is a problem with build error when using ament_python_install_package() and generated interfaces #141 
    https://github.com/ros2/rosidl_python/issues/141 at the same time. 
Therefore I decided to seperately build a package .msg files and declare dependency through the main package.

To run the executable node: 

    ros2 run roboticvehicles_ros2 utils.py

To run the launch file:

    ros2 launch roboticvehicles_ros2 display.launch.py

To use the rtq:

    rqt_graph


P3:

ros2 launch vehiclemodel all.launch.py

ros2 topic pub /VehicleInput vehicle_msg/msg/VehicleInput "{vref: 0.1, steerangle: 0.5}" -r 5






