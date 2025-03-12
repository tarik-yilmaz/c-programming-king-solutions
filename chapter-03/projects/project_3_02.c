/*
 * Chapter 3, Project 2 – Product Information Formatter
 * -----------------------------------------------------
 * This program prompts the user to enter:
 *  - An item number (integer)
 *  - A unit price (floating point, up to $9999.99)
 *  - A purchase date in `mm/dd/yyyy` format
 *
 * It then displays this information in a **tabular format**, ensuring:
 *  - The item number and date are **left-aligned**.
 *  - The unit price is **right-aligned**.
 *
 * Example Run:
 * ------------
 *  Enter item number: 583
 *  Enter unit price: 13.5
 *  Enter purchase date (mm/dd/yyyy): 10/24/2010
 *
 *  Item         Unit            Purchase
 *               Price           Date
 *  583          $ 13.50         10/24/2010
 *
 * Notes:
 * ------
 * - Tabs (`\t`) are used to align the columns properly.
 * - The unit price is displayed with **two decimal places**.
 * - Allows for dollar amounts up to **$9999.99**.
 */

 #include <stdio.h>

 int main(void)
 {
     // Declare variables for item number, price, and purchase date
     int item, day, month, year;
     float price;
 
     // Prompt the user to enter the item number
     printf("Enter item number: ");
     scanf("%d", &item);
 
     // Prompt the user to enter the unit price
     printf("Enter unit price: ");
     scanf("%f", &price);
 
     // Prompt the user to enter the purchase date in mm/dd/yyyy format
     printf("Enter purchase date (mm/dd/yyyy): ");
     scanf("%d/%d/%d", &month, &day, &year);
 
     printf("\n"); // Print a blank line for better readability
 
     // Print table header with properly spaced columns
     printf("Item\t\tUnit\t\tPurchase\n");
     printf("\t\tPrice\t\tDate\n");
 
     // Print formatted output, ensuring correct alignment
     printf("%d\t\t$ %.2f\t\t%02d/%02d/%d\n", item, price, month, day, year);
 
     return 0; // End of program
 }
 