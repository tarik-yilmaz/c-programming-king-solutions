/*
 * Chapter 2, Exercise 4 – Uninitialized Variables
 * ------------------------------------------------
 * This program declares several `int` and `float` variables 
 * without initializing them, then prints their values.
 * 
 * Key Concepts:
 *  - Uninitialized variables may contain unpredictable "garbage values".
 *  - These values depend on memory state at runtime.
 *  - To avoid undefined behavior, variables should always be initialized before use.
 *
 * Expected Output (varies per execution):
 * Uninitialized int values: ?, ?, ?
 * Uninitialized float values: ?, ?, ?
 *
 * Note: The actual output may differ across compilers and systems.
 */

 #include <stdio.h>

 int main(void) {
     int a, b, c; // Declared but not initialized
     float x, y, z; // Declared but not initialized
 
     // Printing the uninitialized variables
     printf("Uninitialized int values: %d, %d, %d\n", a, b, c);
     printf("Uninitialized float values: %f, %f, %f\n", x, y, z);
 
     return 0;
 }
 