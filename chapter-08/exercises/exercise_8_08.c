/*
 * Chapter 8, Exercise 8 – Declaration of a Two-Dimensional Temperature Array
 * ---------------------------------------------------------------------------
 * This program declares a two-dimensional array named temperature_readings that stores
 * one month of hourly temperature readings. For simplicity, assume that a month has 30 days.
 *
 * Details:
 *  - The array has 30 rows, each representing a day of the month.
 *  - It has 24 columns, each representing an hour of the day.
 *  - The type double is used to store the temperature readings because it provides
 *    the precision needed for decimal values.
 *
 * Example:
 *  - temperature_readings[0][0] represents the temperature on Day 1, Hour 0.
 *  - temperature_readings[29][23] represents the temperature on Day 30, Hour 23.
 *  - The array can store a total of 30 * 24 = 720 temperature readings.
 */

 #include <stdio.h>

 int main(void) {
     // Declare a two-dimensional array for 30 days and 24 hours each
     double temperature_readings[30][24];
 
     // Example: Initialize some values for demonstration
     temperature_readings[0][0] = 15.5;  // Day 1, Hour 0
     temperature_readings[29][23] = 20.2; // Day 30, Hour 23
 
     // Print example values to verify correctness
     printf("Temperature on Day 1, Hour 0: %.1f°C\n", temperature_readings[0][0]);
     printf("Temperature on Day 30, Hour 23: %.1f°C\n", temperature_readings[29][23]);
 
     return 0;
 }
 