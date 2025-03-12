/*
 * Chapter 5, Project 3 – Broker Commission Calculator
 * -----------------------------------------------------
 * This program extends the original broker.c program by making the following changes:
 *
 * (a) The user is prompted to enter the number of shares and the price per share,
 *     instead of the overall value of the trade.
 *
 * (b) The program calculates the commission charged by a rival broker.
 *     - For fewer than 2000 shares, the rival's commission is: $33 plus 3 cents per share.
 *     - For 2000 shares or more, the rival's commission is: $33 plus 2 cents per share.
 *
 * The trade value is computed as:
 *     value = number of shares * price per share.
 *
 * The original broker's commission is determined by the trade value according
 * to a tiered formula, with a minimum commission of $39.00.
 *
 * The program then displays both the commission charged by the original broker
 * and the rival's commission.
 *
 * Example Run:
 * ------------
 *  Enter the number of shares: 1500
 *  Enter the price per share: 20.00
 *  Commission: $[calculated_value]
 *  Rival's commission: $[calculated_value]
 *
 * Notes:
 * ------
 * - This program uses if statements to select the correct commission rate based on
 *   the trade value.
 * - The rival broker's commission is computed based solely on the number of shares.
 */

 #include <stdio.h>

 int main(void) {
     float commission, price, rival, value;
     int share;  // Use int for shares assuming they are whole numbers
 
     // Input: Number of shares and price per share
     printf("Enter the number of shares: ");
     scanf("%d", &share);
 
     printf("Enter the price per share: ");
     scanf("%f", &price);
 
     // Calculate trade value
     value = share * price;
 
     // Calculate broker's commission based on trade value
     if (value < 2500.00f)
         commission = 30.00f + .017f * value;
     else if (value < 6250.00f)
         commission = 56.00f + .0066f * value;
     else if (value < 20000.00f)
         commission = 76.00f + .0034f * value;
     else if (value < 50000.00f)
         commission = 100.00f + .0022f * value;
     else if (value < 500000.00f)
         commission = 155.00f + .0011f * value;
     else
         commission = 255.00f + .0009f * value;
 
     if (commission < 39.00f)
         commission = 39.00f;
 
     // Calculate rival broker's commission based on the number of shares
     if (share < 2000)
         rival = 33.00f + (share * 0.03f);
     else
         rival = 33.00f + (share * 0.02f);
 
     // Output the results
     printf("Commission: $%.2f\n", commission);
     printf("Rival's commission: $%.2f\n", rival);
 
     return 0; // End of program
 }
 