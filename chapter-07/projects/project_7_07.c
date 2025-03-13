/*
 * Chapter 7, Project 7 – Fraction Calculator with Operator Selection
 * --------------------------------------------------------------------
 * This program extends Programming Project 6 from Chapter 3. It allows the user
 * to perform addition, subtraction, multiplication, or division on two fractions.
 *
 * Process:
 * --------
 *  1. The user is prompted to enter the first fraction (in the format num/denom).
 *  2. The user is then prompted to enter an operator (+, -, *, or /).
 *  3. Next, the user enters the second fraction.
 *  4. The program performs the specified arithmetic operation on the two fractions:
 *       - Addition:  result = num1/denom1 + num2/denom2 = (num1*denom2 + num2*denom1) / (denom1*denom2)
 *       - Subtraction: result = num1/denom1 - num2/denom2 = (num1*denom2 - num2*denom1) / (denom1*denom2)
 *       - Multiplication: result = (num1*num2) / (denom1*denom2)
 *       - Division: result = (num1/denom1) / (num2/denom2) = (num1*denom2) / (denom1*num2)
 *  5. The program then prints the result in fraction form.
 *
 * Example Runs:
 * -------------
 *  Example 1:
 *      Enter first fraction: 1/2
 *      Enter an operator sign: +
 *      Enter the second fraction: 3/4
 *      The sum is 5/4
 *
 *  Example 2:
 *      Enter first fraction: 1/2
 *      Enter an operator sign: /
 *      Enter the second fraction: 3/4
 *      The quotient is 4/6
 *
 * Note:
 * -----
 * - The program does not simplify the resulting fraction.
 * - Non-alphabetic characters or spaces remain unchanged during input.
 * - An optional check for a zero numerator in subtraction is included for clarity.
 */

 #include <stdio.h>

 int main(void)
 {
     // Variables to store numerators and denominators of the two fractions
     int num1, denom1;        // Numerator and denominator of the first fraction
     int num2, denom2;        // Numerator and denominator of the second fraction
     int result_num, result_denom;  // Numerator and denominator of the resulting fraction
     char ch;                 // Operator for +, -, *, or /
 
     // Prompt the user to enter the first fraction
     printf("Enter first fraction: ");
     scanf("%d/%d", &num1, &denom1);
 
     // Flush the input buffer to remove any leftover newline characters
     while (getchar() != '\n');
 
     // Prompt the user to enter an operator (+, -, *, or /)
     printf("Enter an operator sign: ");
     ch = getchar();  // Read the operator character
 
     // Prompt the user to enter the second fraction
     printf("Enter the second fraction: ");
     scanf("%d/%d", &num2, &denom2);
 
     // Perform the operation based on the chosen operator
     if (ch == '+') {
         // Addition: (num1*denom2 + num2*denom1) / (denom1*denom2)
         result_num = num1 * denom2 + num2 * denom1;
         result_denom = denom1 * denom2;
         printf("The sum is %d/%d\n", result_num, result_denom);
 
     } else if (ch == '-') {
         // Subtraction: (num1*denom2 - num2*denom1) / (denom1*denom2)
         result_num = num1 * denom2 - num2 * denom1;
         result_denom = denom1 * denom2;
 
         // Optional: if the numerator is zero, just print 0
         if (result_num == 0) {
             printf("The result is 0\n");
         } else {
             printf("The difference is %d/%d\n", result_num, result_denom);
         }
 
     } else if (ch == '*') {
         // Multiplication: (num1*num2) / (denom1*denom2)
         result_num = num1 * num2;
         result_denom = denom1 * denom2;
         printf("The product is %d/%d\n", result_num, result_denom);
 
     } else if (ch == '/') {
         // Division: (num1 * denom2) / (denom1 * num2)
         result_num = num1 * denom2;
         result_denom = denom1 * num2;
         printf("The quotient is %d/%d\n", result_num, result_denom);
     }
 
     return 0; // End of program
 }
 