/*
 * Chapter 3, Project 4 – Telephone Number Formatter
 * --------------------------------------------------
 * This program prompts the user to enter a telephone number in the format `(xxx) xxx-xxxx`
 * and then displays the number in the format `xxx.xxx.xxx`.
 *
 * Input Format:
 * -------------
 *  - User enters a phone number in the format `(xxx) xxx-xxxx`.
 *
 * Output Format:
 * --------------
 *  - Displays the formatted phone number in the format `xxx.xxx.xxx`.
 *
 * Example Run:
 * ------------
 *  Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
 *  You entered: 404.817.6900
 *
 * Notes:
 * ------
 *  - The program **extracts three parts** of the phone number dynamically.
 *  - Uses `scanf("(%d) %d-%d")` to correctly **parse the input format**.
 *  - The formatted output replaces **spaces and dashes** with dots.
 */

 #include <stdio.h>

 int main(void)
 {
     int number1, number2, number3; // Variables to store parts of the phone number
 
     // Prompt the user to enter a phone number in the format (xxx) xxx-xxxx
     printf("Enter phone number [(xxx) xxx-xxxx]: ");
     scanf("(%d) %d-%d", &number1, &number2, &number3);
 
     // Display the formatted phone number
     printf("You entered: %d.%d.%d\n", number1, number2, number3);
 
     return 0; // End of program
 }
 