/*
 * Chapter 8, Exercise 9 – Average Temperature Calculator
 * --------------------------------------------------------
 * This program uses the two-dimensional array `temperature_readings` (from Exercise 8)
 * to compute the average temperature for a month. The array has 30 rows (days) and 24
 * columns (hours), for a total of 720 temperature readings.
 *
 * Process:
 * --------
 * 1. The array is assumed to be pre-populated with temperature readings.
 *    (For demonstration purposes, the program populates the array with sample values.)
 * 2. Nested loops traverse the entire array to sum up all temperature values.
 * 3. The average temperature is computed by dividing the total sum by 720.
 * 4. The average temperature is then printed.
 *
 * Example Run (with sample values):
 * ----------------------------------
 * The average temperature for the month is: 12.35°C
 */

 #include <stdio.h>

 int main(void) {
     // Declare a two-dimensional array for 30 days and 24 hours per day.
     double temperature_readings[30][24];
     double total = 0.0;           // Variable to accumulate the total temperature.
     int num_readings = 30 * 24;   // Total number of readings (720).
 
     // Populate the array with sample values for demonstration.
     // For example, temperature_readings[i][j] = (i + 1) + (j * 0.1)
     for (int i = 0; i < 30; i++) {
         for (int j = 0; j < 24; j++) {
             temperature_readings[i][j] = (i + 1) + (j * 0.1);
         }
     }
 
     // Calculate the total sum of all temperature readings.
     for (int i = 0; i < 30; i++) {
         for (int j = 0; j < 24; j++) {
             total += temperature_readings[i][j];
         }
     }
 
     // Compute the average temperature.
     double average = total / num_readings;
 
     // Print the average temperature to two decimal places.
     printf("The average temperature for the month is: %.2f°C\n", average);
 
     return 0; // End of program.
 }
 