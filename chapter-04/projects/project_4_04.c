/*
 * Chapter 4, Project 4 – Convert Integer to Octal (Base 8)
 * --------------------------------------------------------
 * This program reads an integer (0 to 32767) entered by the user 
 * and converts it into **octal representation**.
 *
 * Example Run:
 * ------------
 *  Enter a number between 0 and 32767: 1953
 *  In octal, your number is: 03641
 *
 * Explanation:
 * ------------
 * - The program extracts **each octal digit** by repeatedly dividing the number by 8.
 * - The remainder (`% 8`) gives the **rightmost octal digit**, and integer division (`/ 8`) shifts the number left.
 * - The process continues until all **five octal digits** are extracted.
 */

 #include <stdio.h>

 int main(void) {
     int number, d1, d2, d3, d4, d5; // Variables to store the digits of the octal representation
 
     // Prompt the user to enter a number between 0 and 32767
     printf("Enter a number between 0 and 32767: ");
     scanf("%d", &number);
 
     // Compute each digit of the octal number
     d5 = number % 8;       // Extract the rightmost digit (least significant)
     number /= 8;           // Remove the extracted digit
     d4 = number % 8;       // Extract the next-to-rightmost digit
     number /= 8;           // Remove the extracted digit
     d3 = number % 8;       // Extract the third digit from the right
     number /= 8;           // Remove the extracted digit
     d2 = number % 8;       // Extract the fourth digit from the right
     number /= 8;           // Remove the extracted digit
     d1 = number % 8;       // Extract the leftmost digit (most significant)
 
     // Display the number in octal format with leading zeros
     printf("In octal, your number is: %d%d%d%d%d\n", d1, d2, d3, d4, d5);
 
     return 0; // End of program
 }
 
 /*
 // Example Input/Output:
 // ---------------------
 // Input: 1953
 // Output: In octal, your number is: 03641
 //
 // Input: 32767
 // Output: In octal, your number is: 077777
 //
 // Input: 8
 // Output: In octal, your number is: 00010
 */
 
 /*
 // Key Notes:
 // ----------
 // ✅ Uses repeated division (`/ 8`) and remainder (`% 8`) to extract octal digits.
 // ✅ Ensures the **output always contains five digits** (even if fewer are needed).
 // ✅ Implements **manual base conversion** (without `%o` format specifier).
 // ✅ Matching approach from **Chapter 7 will provide an easier alternative**.
 */
 
 