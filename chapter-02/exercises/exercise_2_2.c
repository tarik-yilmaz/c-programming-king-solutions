/*
 * Chapter 2, Exercise 2 – Understanding Directives & Statements
 * --------------------------------------------------------------
 * This program demonstrates:
 *  - The use of `#include` as a preprocessor directive.
 *  - The structure of `printf` statements and how they produce output.
 *
 * Key Concepts:
 *  - Directives like `#include <stdio.h>` allow access to standard libraries.
 *  - Statements in C must be terminated with a semicolon (`;`).
 *  - `printf` can be used across multiple lines for formatted output.
 *
 * Expected Output:
 * Parkinson's Law: 
 * Work expands so as to fill the time
 * available for its completion.
 */

 #include <stdio.h>

 int main(void) {
     printf("Parkinson's Law: \nWork expands so as to ");
     printf("fill the time\n");
     printf("available for its completion.\n");
 
     return 0;
 }
 