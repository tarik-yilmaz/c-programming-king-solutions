/*
 * Chapter 11, Exercise 1
 *
 * If i is a variable and p points to i, which of the following expressions are
 * aliases for i?
 *
 * (a) *p       (c) *&p     (e) *i      (g) *&i
 * (b) &p       (d) &*p     (f) &i      (h) &*i
 *
 * Explanation:
 * Let:
 *     int i = 42;
 *     int *p = &i;
 *
 * Then:
 *
 * (a) *p     → YES  → dereferencing p gives i
 * (b) &p     → NO   → address of pointer p, not i
 * (c) *&p    → NO   → this gives p (not *p), so not i
 * (d) &*p    → YES  → *p is i, &*p is address of i → same as &i
 * (e) *i     → NO   → invalid: i is not a pointer
 * (f) &i     → NO   → gives address of i, not the value (i itself)
 * (g) *&i    → YES  → &i gives address of i, *&i dereferences → i
 * (h) &*i    → NO   → invalid: i is not a pointer, *i is invalid
 *
 * Final answer: (a), (d), (g)
 */

#include <stdio.h>

int main(void)
{
    int i = 42;
    int *p = &i;

    printf("i     = %d\n", i);
    printf("*p    = %d (a)\n", *p);
    printf("&*p   = %p (d)\n", (void *)&*p);
    printf("*&i   = %d (g)\n", *&i);

    return 0;
}
