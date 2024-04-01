# Line-Follower

Overview

This project demonstrates how to build a line-following robot using an Arduino Uno microcontroller. The robot is designed to autonomously follow a black line on a contrasting surface, such as white paper. It utilizes infrared (IR) sensors to detect the line and adjust its movement accordingly.

Features

Autonomous line-following capability.

Customizable speed and sensitivity settings.

Simple and adaptable hardware setup.

Requirements

Hardware:

Arduino Uno microcontroller board

Two DC motors

Motor driver module (e.g., L298N)

Infrared (IR) sensors (e.g., TCRT5000)

Chassis, wheels, and battery pack

Jumper wires and breadboard

Software:

Arduino IDE (for programming the Arduino Uno)

Setup Instructions

Hardware Assembly:

Connect the DC motors to the motor driver module according to the datasheets.

Connect the IR sensors to the Arduino Uno.

Software Setup:

Clone or download the repository to your local machine: https://github.com/Suyashspidy/Line-Follower.git

Configuration:

Adjust the motor speed and sensor sensitivity settings in the Arduino sketch if necessary.

Ensure that the IR sensors are positioned at an optimal height above the surface to detect the line effectively.

Run:

Power on the Arduino Uno and place the line-following robot on a surface with a contrasting line.

The robot should start following the line autonomously based on the program logic.

Usage

Ensure that the surface has a clear black line for the robot to follow.

Power on the robot and observe its behavior as it follows the line.

Adjust the settings as needed for optimal performance.

License

This project is licensed under the MIT License.
