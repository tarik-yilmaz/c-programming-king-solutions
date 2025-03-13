/*
 * Chapter 7, Project 12 – Expression Evaluator (Left-to-Right Evaluation)
 * -----------------------------------------------------------------------
 * This program evaluates an arithmetic expression entered by the user. The expression
 * contains floating-point operands and the operators +, -, *, and /.
 *
 * Characteristics:
 * ----------------
 * - The expression is evaluated strictly from left to right, with no operator precedence.
 * - For example, the expression:
 *       1 + 2.5 * 3
 *   is evaluated as:
 *       (1 + 2.5) * 3 = 10.5
 *
 * Process:
 * --------
 * 1. The program reads the first floating-point number and initializes the total.
 * 2. It then enters a loop, where it:
 *      a. Skips any white space and reads the next operator.
 *      b. Reads the next floating-point operand.
 *      c. Applies the operator to the total and the operand.
 * 3. The loop terminates when the user presses Enter (i.e., when a newline is encountered).
 * 4. Finally, the program prints the evaluated result.
 *
 * Example Run:
 * ------------
 *  Enter an expression: 1 + 2.5 * 3
 *  Value of expression: 10.50
 */

 #include <stdio.h>

 int main(void) {
 
     char ch;           // To store the operator character
     float num, total;  // 'num' for the current number, 'total' to store the cumulative result
 
     // Prompt the user to enter an expression
     printf("Enter an expression: ");
     
     // Read the first number and initialize the total
     scanf("%f", &total);
 
     // Process the rest of the expression
     while (1) {
         // Skip any spaces and read the next non-space character (operator)
         do {
             ch = getchar();
         } while (ch == ' ');
 
         // If a newline is encountered, the expression is complete
         if (ch == '\n') {
             break;
         }
 
         // Read the next number (operand)
         scanf("%f", &num);
 
         // Perform the operation based on the operator read
         switch (ch) {
             case '+':
                 total += num;
                 break;
             case '-':
                 total -= num;
                 break;
             case '*':
                 total *= num;
                 break;
             case '/':
                 total /= num;
                 break;
         }
     }
     
     // Print the final evaluated result with 2 decimal places
     printf("Value of expression: %.2f\n", total);
 
     return 0; // End of program
 }
 