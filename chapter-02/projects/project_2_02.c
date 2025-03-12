/*
 * Chapter 2, Project 2 – Computing the Volume of a Sphere
 * -------------------------------------------------------
 * This program calculates the volume of a sphere with a fixed radius of 10 meters.
 * The formula used is:
 *       V = (4/3) * π * r³
 * 
 * Key Concepts:
 *  - Correct representation of fractions in floating-point arithmetic.
 *  - Using `pi` as a constant value.
 *  - Multiplication for exponentiation (since C lacks an exponentiation operator).
 * 
 * Observation:
 *  - Using `4/3` instead of `4.0f/3.0f` results in integer division, leading to incorrect output.
 *
 * Expected Output:
 * The volume is: 4188.7900
 */

 #include <stdio.h>

 int main(void) {
     // Define constants
     const float pi = 3.14159;
     const float fraction = 4.0f / 3.0f;
     const int radius = 10;
 
     // Compute the volume using the formula V = (4/3) * π * r³
     float volume = fraction * pi * (radius * radius * radius);
 
     // Display the computed volume
     printf("The volume is: %.4f\n", volume);
 
     return 0;
 }
 