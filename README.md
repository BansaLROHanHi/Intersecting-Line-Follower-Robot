# Intersecting Line Follower Robot

This is a project that demonstrates the implementation of a line follower robot with the ability to handle intersecting lines. The robot utilizes an Arduino Uno microcontroller, IR sensors, motors, and a custom-designed chassis to navigate through a predefined path.

## Features

- Detects and follows a line drawn on the floor
- Navigates through intersections and sharp turns
- Uses IR sensors to detect the line and guide the robot's movement
- Powered by an Arduino Uno microcontroller
- Custom-designed chassis for stability and maneuverability

## Components

- Arduino Uno board
- Acrylic sheet (5mm, 2x2 feet)
- 2 Geared-Encoder Motors (60 RPM)
- 2 Rubber wheels (75mm)
- 1 Castor wheel
- 2 IR Sensors
- 1 LIPO 12V Battery
- 1 Motor driver (L298)
- Aluminum profiles (20x20mm)
- Allen bolts and screws
- Jumper wires

## Methodology

1. The line follower robot uses IR sensors to detect the line on the ground.
2. When the sensors detect the line, the analog signals are fed to the Arduino Uno microcontroller.
3. The microcontroller processes the sensor data and controls the motors to guide the robot's movement.
4. To handle intersecting lines, the robot uses a combination of sensor readings and programmed logic to determine the appropriate direction to follow.
5. The custom-designed chassis provides stability and maneuverability, allowing the robot to navigate through turns and intersections.

## Chassis Design Approach

The project utilizes a two-wheeled chassis design, which provides excellent mobility and maneuverability for the line follower robot. The chassis is constructed using acrylic sheets, aluminum profiles, and other hardware components.

## CAD Approach

A Computer-Aided Design (CAD) software was used to design and visualize the robot's components, including the chassis, wheels, motors, sensors, and other parts. This approach allowed for optimization of the design and identification of potential issues before the actual construction phase.

## Applications

- **Educational**: This project can be used for educational purposes, helping students learn about robotics, microcontrollers, and programming.
- **Low-cost**: The use of an Arduino Uno board and readily available components makes this project a cost-effective solution.
- **Customizable**: The robot can be easily modified and customized to meet specific requirements.
- **Efficiency**: The robot can follow a line accurately and navigate through intersections efficiently.

## Limitations

- **Limited range**: The robot's movement is restricted to the line it is programmed to follow.
- **Sensitivity**: The robot's performance may be affected by surface conditions and environmental factors.
- **Complex intersections**: The robot may struggle with navigating through highly complex intersections with multiple lines.

## References

1. Advanced Line Follower Robot
2. Line Following Robot Algorithm
3. Line Following Robot
4. How to Make Line Follower Robot
5. Line Follower Robot Using Microcontroller
