/*
 * Chapter 2, Exercise 3 – Optimizing Variable Assignments
 * --------------------------------------------------------
 * This program computes the dimensional weight of a box.
 * The original version used separate assignments for dimensions 
 * and an extra variable for weight calculation. 
 *
 * This optimized version:
 *  - Uses **direct initialization** for height, length, and width.
 *  - Eliminates the separate weight variable, computing it inline.
 *
 * Key Concepts:
 *  - Variable initializers for cleaner code.
 *  - Inline calculations to reduce unnecessary variables.
 *
 * Expected Output:
 * Dimensions: 12x10x8
 * Volume (cubic inches): 960
 * Dimensional weight (pounds): 6
 */

 #include <stdio.h>

 int main(void) {
     int height = 8, length = 12, width = 10;
     int volume = height * length * width;
 
     printf("Dimensions: %dx%dx%d\n", length, width, height);
     printf("Volume (cubic inches): %d\n", volume);
     printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);
 
     return 0;
 }
 