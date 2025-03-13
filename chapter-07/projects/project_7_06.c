/*
 * Chapter 7, Project 6 – Size of Data Types
 * -----------------------------------------
 * This program prints the sizes (in bytes) of several data types:
 *    - int
 *    - short
 *    - long
 *    - float
 *    - double
 *    - long double
 *
 * Note:
 * -----
 * - The %zu format specifier is used for size_t, which is the type returned by sizeof.
 * - For C89, you may use %lu with (unsigned long) sizeof(variable).
 */

 #include <stdio.h>

 int main(void) {
     int i;
     short s;
     long l;
     float f;
     double d;
     long double ld;
 
     printf("Size of int: %zu bytes\n", sizeof(i));
     printf("Size of short: %zu bytes\n", sizeof(s));
     printf("Size of long: %zu bytes\n", sizeof(l));
     printf("Size of float: %zu bytes\n", sizeof(f));
     printf("Size of double: %zu bytes\n", sizeof(d));
     printf("Size of long double: %zu bytes\n", sizeof(ld));
 
     return 0;
 }
 