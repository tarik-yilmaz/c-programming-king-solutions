/*
 * Chapter 5, Project 11 – Two-Digit Number to English Word Converter
 * --------------------------------------------------------------------
 * This program prompts the user to enter a two-digit number and then prints the
 * English word for that number.
 *
 * Process:
 * --------
 *  1. The program extracts the tens and ones digits using integer division and the modulo operator.
 *  2. It handles the special case for numbers between 11 and 19, which require unique names.
 *  3. For numbers outside 11–19, it uses two switch statements:
 *     - One to print the word corresponding to the tens digit (e.g., "twenty", "thirty", etc.).
 *     - Another to print the word corresponding to the ones digit.
 *  4. A hyphen is printed between the tens and ones words if both digits are nonzero.
 *
 * Example Run:
 * ------------
 *  Enter a two-digit number: 45
 *  You entered the number forty-five.
 *
 * Hint:
 * -----
 * Use `%` and `/` to split the number into digits.
 */

 #include <stdio.h>

 int main(void) {
 
     int number, digit1, digit2; // Variables for the number and its digits
 
     // Prompt the user to enter a two-digit number
     printf("Enter a two-digit number: ");
     scanf("%d", &number);
 
     // Extract the digits
     digit1 = number % 10;       // Ones place
     digit2 = number / 10;       // Tens place
 
     // Handle special case: numbers between 11 and 19
     if (number >= 11 && number <= 19) {
         // Use a switch statement to print the corresponding name
         switch (number) {
             case 11: printf("You entered the number eleven.\n"); break;
             case 12: printf("You entered the number twelve.\n"); break;
             case 13: printf("You entered the number thirteen.\n"); break;
             case 14: printf("You entered the number fourteen.\n"); break;
             case 15: printf("You entered the number fifteen.\n"); break;
             case 16: printf("You entered the number sixteen.\n"); break;
             case 17: printf("You entered the number seventeen.\n"); break;
             case 18: printf("You entered the number eighteen.\n"); break;
             case 19: printf("You entered the number nineteen.\n"); break;
         }
         return 0;  // Skip the rest of the code for special cases
     }
 
     // Handle numbers outside the special case
     printf("You entered the number ");
 
     // Print the tens place using a switch statement
     switch (digit2) {
         case 1: printf("ten"); break; // Special case for 10
         case 2: printf("twenty"); break;
         case 3: printf("thirty"); break;
         case 4: printf("forty"); break;
         case 5: printf("fifty"); break;
         case 6: printf("sixty"); break;
         case 7: printf("seventy"); break;
         case 8: printf("eighty"); break;
         case 9: printf("ninety"); break;
     }
 
     // Print a hyphen if both tens and ones digits are nonzero
     if (digit2 > 0 && digit1 > 0) {
         printf("-");
     }
 
     // Print the ones place using a switch statement
     switch (digit1) {
         case 1: printf("one"); break;
         case 2: printf("two"); break;
         case 3: printf("three"); break;
         case 4: printf("four"); break;
         case 5: printf("five"); break;
         case 6: printf("six"); break;
         case 7: printf("seven"); break;
         case 8: printf("eight"); break;
         case 9: printf("nine"); break;
     }
 
     // End the output with a period and newline
     printf(".\n");
 
     return 0; // End of program
 }
 