/*
 * Chapter 2, Exercise 5 – Identifying Valid C Identifiers
 * --------------------------------------------------------
 * This program examines identifier rules in C by analyzing different naming 
 * conventions and determining which are valid or invalid.
 *
 * Key Concepts:
 *  - A valid C identifier must:
 *    • Start with a letter (A-Z or a-z) or an underscore (_).
 *    • Contain only letters, digits (0-9), or underscores (_).
 *    • Not be a reserved keyword in C.
 *
 * Identifier Analysis:
 *  - ❌ `100 bottles` → Invalid (starts with a number & contains a space).
 *  - ❌ `100_bottles` → Invalid (starts with a number).
 *  - ❌ `one hundred bottles` → Invalid (contains spaces).
 *  - ✅ `bottles_by_the_hundred_` → Valid (follows identifier rules).
 */

 #include <stdio.h>

 int main(void) {
     // Defining a legal identifier
     int bottles_by_the_hundred_ = 100;
 
     // Print the result
     printf("bottles_by_the_hundred_ is a valid identifier: %d\n", bottles_by_the_hundred_);
 
     return 0;
 }
 