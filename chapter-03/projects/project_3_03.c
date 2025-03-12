/*
 * Chapter 3, Project 3 – ISBN Breakdown
 * --------------------------------------
 * This program takes an ISBN-13 input from the user in the format `XXX-X-XXX-XXXXX-X`
 * and extracts its five components:
 *
 * ISBN Components:
 * ----------------
 *  - GS1 prefix (first 3 digits)
 *  - Group identifier (next digits, variable length)
 *  - Publisher code (variable length)
 *  - Item number (variable length)
 *  - Check digit (last digit)
 *
 * Input Format:
 * -------------
 *  - User enters the ISBN in the format `XXX-X-XXX-XXXXX-X`
 *
 * Output Format:
 * --------------
 *  - Displays each extracted component separately.
 *
 * Example Run:
 * ------------
 *  Enter ISBN: 978-0-393-97950-3
 *  GS1 prefix: 978
 *  Group identifier: 0
 *  Publisher code: 393
 *  Item number: 97950
 *  Check digit: 3
 *
 * Notes:
 * ------
 *  - The number of digits in each group **can vary**.
 *  - The program does **not assume fixed-length groups**.
 *  - Uses `scanf("%d-%d-%d-%d-%d")` to dynamically extract components.
 */

 #include <stdio.h>

 int main(void)
 {
     // Variables to store the ISBN components
     int gs1, group, publisher, item, check;
 
     // Prompt user for ISBN input in standard format
     printf("Enter ISBN (XXX-X-XXX-XXXXX-X): ");
     scanf("%d-%d-%d-%d-%d", &gs1, &group, &publisher, &item, &check);
 
     // Display extracted ISBN components
     printf("\n"); // Blank line for better readability
     printf("GS1 prefix: %d\n", gs1);
     printf("Group identifier: %d\n", group);
     printf("Publisher code: %d\n", publisher);
     printf("Item number: %d\n", item);
     printf("Check digit: %d\n", check);
 
     return 0; // End of program
 }
 