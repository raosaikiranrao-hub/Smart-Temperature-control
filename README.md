Smart Temperature Control System



1\. Project Overview



The Smart Temperature Control System is a beginner-friendly Embedded C project that monitors temperature input and controls fan speed according to predefined temperature ranges.



The project demonstrates conditional statements, user input, decision-making, and basic embedded-system control logic using the C programming language.



2\. Objectives



\* Understand temperature-based control logic.

\* Apply conditional statements in C.

\* Simulate automatic fan-speed control.

\* Display fan status and high-temperature warnings.



3\. Technologies Used



\* Programming Language: C

\* Development Environment: Visual Studio Code

\* Compiler: GCC

\* Version Control: Git

\* Repository Hosting: GitHub



4\. Features



\* Accepts temperature input from the user.

\* Keeps the fan OFF below 30°C.

\* Sets fan speed to 30% from 30°C to 39°C.

\* Sets fan speed to 60% from 40°C to 49°C.

\* Sets fan speed to 100% at 50°C and above.

\* Displays a high-temperature warning at 60°C and above.



5\. Control Logic



Temperature	Fan Speed

Below 30°C	0% — OFF

30°C–39°C	30%

40°C–49°C	60%

50°C and above	100%

60°C and above	High-temperature warning



6\. How It Works



1\. The program asks the user to enter the temperature.

2\. It compares the input against predefined temperature ranges.

3\. It determines the appropriate fan speed.

4\. It displays the fan status and speed.

5\. If the temperature reaches 60°C or higher, it displays a warning.



7\. How to Run



1\. Install a C compiler such as GCC.

2\. Download or clone this repository.

3\. Open a terminal in the project directory.

4\. Compile the program:

&#x20;   gcc temperature\_control.c -o temperature\_control

5\. Run the program on Windows:

&#x20;   .\\temperature\_control.exe



8\. Learning Outcomes



\* C programming fundamentals.

\* Conditional statements and logical operators.

\* Temperature-based decision-making.

\* Basic embedded-system control concepts.

\* Git and GitHub version control.



9\. Future Improvements



\* Read temperature from an actual temperature sensor.

\* Implement PWM-based fan-speed control.

\* Display temperature on an LCD.

\* Integrate a microcontroller such as an Arduino or STM32.



10\. Author



Embedded Systems Learner | ECE Graduate





Note: This is a software simulation. It does not directly control physical hardware or measure real temperature.

