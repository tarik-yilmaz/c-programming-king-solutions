/*
 * Chapter 5, Project 7 – Largest and Smallest of Four Integers
 * -------------------------------------------------------------
 * This program finds the largest and smallest of four integers entered by the user.
 *
 * Input:
 * -------------
 *  - The user is prompted to enter four integers.
 *
 * Output:
 * --------------
 *  - The program displays the largest and the smallest of the four integers.
 *
 * Example Run:
 * ------------
 *  Enter four integers: 21 43 10 35
 *  Largest: 43
 *  Smallest: 10
 *
 * Hint:
 * -----
 * Use as few if statements as possible (four if statements are sufficient).
 */

 #include <stdio.h>

 int main(void) {
 
     int n1, n2, n3, n4, max, min; // Variables to store the four integers, maximum, and minimum values
 
     // Prompt the user to enter four integers
     printf("Enter four integers: ");
     scanf("%d%d%d%d", &n1, &n2, &n3, &n4);
 
     // Compare the first two numbers to initialize `max` and `min`
     if (n1 > n2) {
         max = n1; // n1 is larger
         min = n2; // n2 is smaller
     } else {
         max = n2; // n2 is larger
         min = n1; // n1 is smaller
     }
 
     // Compare the third number with the current `max` and `min`
     if (n3 > max) {
         max = n3; // Update `max` if n3 is larger
     } else if (n3 < min) {
         min = n3; // Update `min` if n3 is smaller
     }
 
     // Compare the fourth number with the current `max` and `min`
     if (n4 > max) {
         max = n4; // Update `max` if n4 is larger
     } else if (n4 < min) {
         min = n4; // Update `min` if n4 is smaller
     }
 
     // Print the largest and smallest numbers
     printf("Largest: %d\n", max);
     printf("Smallest: %d\n", min);
 
     return 0; // End of program
 }
 
 /*
 // Example Input/Output:
 // ----------------------
 // Input: 21 43 10 35
 // Output:
 // Largest: 43
 // Smallest: 10
 */
 