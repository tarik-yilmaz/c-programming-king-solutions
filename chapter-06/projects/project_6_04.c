/*
 * Chapter 6, Project 5 – Broker Commission Calculator with Loop
 * ---------------------------------------------------------------
 * This program extends the broker.c program by adding a loop so that the user
 * can enter more than one trade. For each trade entered, the program calculates
 * the commission based on a tiered structure. The program terminates when the user
 * enters 0 or a negative trade value.
 *
 * Commission Structure:
 * -----------------------
 *  - If value < $2500.00:         Commission = $30.00 + 1.7% of trade value
 *  - $2500.00 <= value < $6250.00: Commission = $56.00 + 0.66% of trade value
 *  - $6250.00 <= value < $20000.00: Commission = $76.00 + 0.34% of trade value
 *  - $20000.00 <= value < $50000.00: Commission = $100.00 + 0.22% of trade value
 *  - $50000.00 <= value < $500000.00: Commission = $155.00 + 0.11% of trade value
 *  - value >= $500000.00:         Commission = $255.00 + 0.09% of trade value
 *
 * A minimum commission of $39.00 is enforced.
 *
 * Example Run:
 * ------------
 *  Enter value of trade (or 0 to exit): 30000
 *  Commission: $166.00
 *
 *  Enter value of trade (or 0 to exit): 20000
 *  Commission: $144.00
 *
 *  Enter value of trade (or 0 to exit): 0
 *
 * Note:
 * -----
 * - The program uses a loop that terminates when the trade value entered is 0 or negative.
 */

 #include <stdio.h>

 int main(void) {
 
     float commission, value; // Variables to store commission and trade value
 
     // Loop to allow multiple trades to be entered; terminates when value <= 0
     while (1) {
         // Prompt the user to enter the value of a trade
         printf("Enter value of trade (or 0 to exit): ");
         scanf("%f", &value);
 
         // Exit the loop if the user enters 0 or a negative value
         if (value <= 0) {
             break;
         }
 
         // Determine the commission based on the trade value
         if (value < 2500.00f) {
             commission = 30.00f + 0.017f * value;
         } else if (value < 6250.00f) {
             commission = 56.00f + 0.0066f * value;
         } else if (value < 20000.00f) {
             commission = 76.00f + 0.0034f * value;
         } else if (value < 50000.00f) {
             commission = 100.00f + 0.0022f * value;
         } else if (value < 500000.00f) {
             commission = 155.00f + 0.0011f * value;
         } else {
             commission = 255.00f + 0.0009f * value;
         }
 
         // Ensure the commission is not below $39.00
         if (commission < 39.00f) {
             commission = 39.00f;
         }
 
         // Display the calculated commission for the trade
         printf("Commission: $%.2f\n", commission);
     }
 
     return 0; // End of program
 }
 
 /*
 // Example Inputs/Outputs:
 // -----------------------
 // Input: 30000      → Output: Commission: $166.00
 // Input: 20000      → Output: Commission: $144.00
 // Input: 0          → Program terminates
 */
 