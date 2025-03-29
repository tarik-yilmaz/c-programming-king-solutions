/*
 * Chapter 11, Exercise 4
 *
 * Write a function that swaps the values of two integers using pointers.
 */

#include <stdio.h>

/*
 * Swaps the values of the integers pointed to by p and q.
 */
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main(void)
{
    int num1 = 2;
    int num2 = 3;

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swap : num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
