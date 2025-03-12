/*
 * Chapter 2, Exercise 1 – Hello, World!
 * --------------------------------------
 * This program prints "hello, world" to the console.
 * 
 * Key concepts:
 *  - Basic structure of a C program
 *  - Use of printf() for console output
 *  - Importance of returning a value in main()
 *
 * Additional note:
 * Some compilers may generate a warning if `main` lacks a `return` statement.
 * This is required for standards compliance in modern C.
 */

 #include <stdio.h>

 int main(void) {
     printf("hello, world\n");
     return 0; // Explicit return for standards compliance
 }
 