# PWM_Drawer
AMIT-embedded systems diploma graduation project;
This project implements a Pulse Width Modulation (PWM) drawer simulation using the ATmega32 microcontroller. The PWM technique allows for varying the width of the pulses in a signal, which is particularly useful for controlling the brightness of LEDs, the speed of motors, or other applications requiring variable power;
Key Features;
Microcontroller: ATmega32;
PWM Control: Adjustable duty cycle to control output devices.;
Simulation Environment: The project is designed to be simulated using proteus.;
User Interface: Simple controls for adjusting the PWM settings (from main.c file).;
How It Works;
Microcontroller Initialization:;
The ATmega32 is initialized with the necessary configurations for PWM generation. This includes setting the appropriate data direction for the pins used for output.;
PWM Signal Generation:;
The ATmega32 uses Timer/Counter modules to generate PWM signals. The timer is configured in Fast PWM mode, allowing for varying duty cycles.
The duty cycle determines the proportion of time the signal is high versus low, which in turn controls the brightness of an LED or the speed of a motor.
Adjusting Duty Cycle:
The duty cycle can be adjusted programmatically through user input or predefined values. This is done by changing the value in the OCR (Output Compare Register) of the timer.
The simulation allows users to visualize how changes in duty cycle affect the output.
