/*
 * Chapter 8, Project 13 – Name Formatter with Output Labeling
 * -----------------------------------------------------------
 * This program reads a first and last name from the user and then displays the name
 * in the format "LastName, F." where F is the first initial.
 *
 * Process:
 * --------
 *  1. The program reads the first name (only the first letter is needed) and then skips
 *     the rest of the first name.
 *  2. It then skips any extra spaces between the first and last names.
 *  3. The last name is read into an array of characters (up to 20 characters).
 *  4. Finally, the program prints the formatted name: "LastName, F."
 *
 * Assumptions:
 * ------------
 *  - The last name is no more than 20 characters long.
 */

 #include <stdio.h>
 #include <ctype.h>
 
 int main(void) {
     char last_name[20];  // Array to store the last name (max 20 characters)
     char first_name;     // To store the first initial of the first name
     char ch;             // To hold each character read from input
     int i = 0;           // Index for last_name array
 
     printf("Enter a first and last name: ");
 
     // Read the first character of the first name (this is the first initial)
     first_name = getchar();
 
     // Skip the remainder of the first name
     while ((ch = getchar()) != ' ' && ch != '\n')
         ;
 
     // Skip any spaces between the first and last names
     while ((ch = getchar()) == ' ')
         ;
 
     // Read the last name into the array until a space or newline is encountered
     while (ch != '\n' && ch != ' ' && i < 19) {
         last_name[i] = ch;
         i++;
         ch = getchar();
     }
     last_name[i] = '\0';  // Null-terminate the last name string
 
     // Print the formatted output
     printf("You entered the name: %s, %c.\n", last_name, first_name);
 
     return 0;
 }
 