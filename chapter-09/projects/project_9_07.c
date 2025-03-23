/*
 * Chapter 9, Project 7 – Optimized Recursive Power Function
 * ----------------------------------------------------------
 * This program defines a recursive function that computes x^n efficiently using:
 *   - x^n = (x^(n/2))^2 when n is even
 *   - x^n = x * x^(n-1) when n is odd
 *   - The base case is x^0 = 1
 *
 * This technique reduces the number of multiplications needed for large n.
 *
 * Example Run:
 * ------------
 *  Enter base (x): 2
 *  Enter exponent (n): 8
 *  Result: 256.00
 */

 #include <stdio.h>

 // Recursive power function
 double power(double x, int n) {
    double half = power(x, n / 2);
    
     if (n == 0)
         return 1;
     else if (n % 2 == 0)
         return half * half;
     else
         return x * power(x, n - 1);
 }
 
 int main(void) {
     double x;
     int n;
 
     printf("Enter base (x): ");
     scanf("%lf", &x);
 
     printf("Enter exponent (n): ");
     scanf("%d", &n);
 
     printf("Result: %.2f\n", power(x, n));
 
     return 0;
 }
 