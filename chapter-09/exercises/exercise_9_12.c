/*
 * Chapter 9, Exercise 12 – Inner Product of Two Vectors
 * -----------------------------------------------------
 * This program defines a function `inner_product` that calculates the inner product
 * (also known as the dot product) of two vectors (arrays) of `double` values.
 *
 * The inner product is defined as:
 *     a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]
 *
 * Process:
 * --------
 * 1. Iterate over both arrays in a single loop.
 * 2. Multiply elements at the same index from both arrays.
 * 3. Accumulate the result in a running sum.
 * 4. Return the final product as a `double`.
 *
 * Example Run:
 * ------------
 *  Input arrays:
 *      a[] = {1, 2, 3}
 *      b[] = {1, 2, 3}
 *  Output:
 *      The inner product is 14.00
 */

 #include <stdio.h>

 // Function to compute the inner (dot) product of two arrays
 double inner_product(double a[], double b[], int n) {
     double product = 0;
     for (int i = 0; i < n; i++) {
         product += a[i] * b[i];
     }
     return product;
 }
 
 int main() {
     double a[] = {1, 2, 3};
     double b[] = {1, 2, 3};
 
     int size = sizeof(a) / sizeof(a[0]);
 
     printf("The inner product is %.2f\n", inner_product(a, b, size));
 
     return 0;
 }
 