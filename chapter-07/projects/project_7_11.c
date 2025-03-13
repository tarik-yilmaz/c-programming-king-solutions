/*
 * Chapter 7, Project 11 – Name Formatter
 * ---------------------------------------
 * This program reads a first name and a last name entered by the user and displays
 * the last name, followed by a comma, a space, the first initial of the first name, and a period.
 *
 * Process:
 * --------
 *  1. The program prompts the user to enter a first and last name.
 *  2. It skips any extra spaces before the first name.
 *  3. It stores the first letter of the first name as the first initial.
 *  4. It skips the remainder of the first name.
 *  5. It skips any extra spaces between the first and last names.
 *  6. It then prints the last name character by character until a space or newline is encountered.
 *  7. Finally, it prints a comma, a space, the first initial, and a period.
 *
 * Example Run:
 * ------------
 *  Enter a first and last name: Lloyd Fosdick
 *  Fosdick, L.
 *
 * Note:
 * -----
 * - The program handles extra spaces before the first name, between the first and last names,
 *   and after the last name.
 */

 #include <stdio.h>

 int main(void) {
 
     char ch;              // Variable to store each character
     char first_initial;   // Variable to store the first initial
 
     // Prompt the user to enter a first and last name
     printf("Enter a first and last name: ");
 
     // Skip leading spaces before the first name
     while ((ch = getchar()) == ' ');
 
     // Store the first letter of the first name as the initial
     first_initial = ch;
 
     // Skip the rest of the first name until a space or newline is encountered
     while ((ch = getchar()) != ' ' && ch != '\n');
 
     // Skip spaces between the first and last names
     while (ch == ' ') {
         ch = getchar();
     }
 
     // Print the last name character by character until a space or newline
     while (ch != ' ' && ch != '\n') {
         putchar(ch);      // Print the current character of the last name
         ch = getchar();   // Read the next character
     }
 
     // Print the comma, space, and first initial followed by a period
     printf(", %c.\n", first_initial);
 
     return 0; // End of program
 }
 