/*
 * Chapter 9, Exercise 9 – Understanding Pass-by-Value in C
 * ---------------------------------------------------------
 * What will be the output of the following program?
 *
 * #include <stdio.h>
 *
 * void swap(int a, int b);
 *
 * int main(void)
 * {
 *     int i = 1, j = 2;
 *     
 *     swap(i, j);
 *     printf("i = %d, j = %d\n", i, j);
 *     return 0;
 * }
 * void swap(int a, int b)
 * {
 *     int temp = a;
 *     a = b;
 *     b = temp;
 * }
 *
 * Analysis:
 * ---------
 * - In C, function arguments are **passed by value**.
 * - When calling `swap(i, j)`, the function receives **copies** of `i` and `j`, 
 *   so modifications inside `swap()` do not affect the original variables in `main()`.
 * - Therefore, the original values of `i` and `j` remain unchanged.
 *
 * Expected Output:
 * ----------------
 * i = 1, j = 2
 *
 * Why Does It Happen?
 * -------------------
 * - `swap()` swaps **local copies** of `i` and `j`, but does not modify the original variables.
 * - To swap variables in C **permanently**, we must use **pointers** to pass by reference.
 */
