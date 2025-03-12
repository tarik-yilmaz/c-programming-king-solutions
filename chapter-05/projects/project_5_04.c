/*
 * Chapter 5, Project 4 – Wind Speed Description (Beaufort Scale)
 * ---------------------------------------------------------------
 * This program prompts the user to enter a wind speed (in knots) and then displays
 * the corresponding description based on a simplified version of the Beaufort scale.
 *
 * Beaufort Scale (Simplified):
 * ----------------------------
 *   Speed (knots)       Description
 *   Less than 1         Calm
 *   1 - 3               Light air
 *   4 - 27              Breeze
 *   28 - 47             Gale
 *   48 - 63             Storm
 *   Above 63            Hurricane
 *
 * Example Run:
 * ------------
 *  Enter wind speed in knots: 10
 *  Breeze
 *
 * Notes:
 * ------
 * - An additional check for negative wind speeds is included to handle invalid input.
 */

 #include <stdio.h>

 int main(void) {
     int knots;
 
     // Prompt the user to enter a wind speed in knots
     printf("Enter wind speed in knots: ");
     scanf("%d", &knots);
     
     // Check for negative wind speeds
     if (knots < 0) {
         printf("Invalid input. Wind speed cannot be negative.\n");
     } else if (knots == 0) {
         printf("Calm\n");
     } else if (knots <= 3) {
         printf("Light air\n");
     } else if (knots <= 27) {
         printf("Breeze\n");
     } else if (knots <= 47) {
         printf("Gale\n");
     } else if (knots <= 63) {
         printf("Storm\n");
     } else {
         printf("Hurricane\n");
     }
 
     return 0;
 }
 
 /*
 // Example Inputs/Outputs:
 // -----------------------
 // Input: 0      → Output: Calm
 // Input: 2      → Output: Light air
 // Input: 10     → Output: Breeze
 // Input: 35     → Output: Gale
 // Input: 50     → Output: Storm
 // Input: 70     → Output: Hurricane
 */
 