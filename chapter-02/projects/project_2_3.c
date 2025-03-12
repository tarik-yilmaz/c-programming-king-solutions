/*
 * Chapter 2, Project 3 – Volume of a Sphere with User Input
 * ---------------------------------------------------------
 * This program calculates the volume of a sphere based on a user-provided radius.
 * The formula used is:
 *       V = (4/3) * π * r³
 * 
 * Key Concepts:
 *  - Using `scanf()` to get user input.
 *  - Correct floating-point arithmetic representation.
 *  - Using `const` to define constants.
 *
 * Expected Input/Output:
 * ----------------------
 * Enter radius as an integer: 10
 * The volume is: 4188.79
 */

 #include <stdio.h>

 int main(void) {
     // Define constants
     const float pi = 3.14159;
     const float fraction = 4.0f / 3.0f;
 
     // Declare an integer variable for the radius (user input)
     int radius;
 
     // Prompt the user to enter the radius
     printf("Enter radius as an integer: ");
     scanf("%d", &radius);
 
     // Compute the volume using the formula V = (4/3) * π * r³
     float volume = fraction * pi * (radius * radius * radius);
 
     // Display the computed volume (formatted to 2 decimal places)
     printf("The volume is: %.2f\n", volume);
 
     return 0;
 }
 