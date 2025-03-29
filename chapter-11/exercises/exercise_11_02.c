/*
 * Chapter 11, Exercise 2
 *
 * If i is an int variable and p and q are pointers to int,
 * which of the following assignments are legal?
 *
 * Let:
 *     int i;
 *     int *p, *q;
 *
 * Analyze each assignment:
 *
 * (a) p = i;       → ILLEGAL → p expects a pointer (int*), but i is int
 * (b) *p = &i;     → ILLEGAL → *p is int (dereferenced), but &i is int* → type mismatch
 * (c) &p = q;      → ILLEGAL → cannot assign to &p (it's not a variable)
 * (d) p = &q;      → ILLEGAL → &q is int** (pointer to pointer), p is int*
 * (e) p = *&q;     → LEGAL   → *&q resolves to q (which is int*), assigned to p
 * (f) p = q;       → LEGAL   → assigning one int* to another → same type
 * (g) p = *q;      → ILLEGAL → *q is int, p is int* → type mismatch
 * (h) *p = q;      → ILLEGAL → *p is int, q is int* → type mismatch
 * (i) *p = *q;     → LEGAL   → both *p and *q are int → assignment is valid
 */

#include <stdio.h>

int main(void)
{
    int i = 10;
    int *p, *q;

    q = &i;  // Initialize q so *q is defined
    p = q;   // (f) LEGAL
    *p = *q; // (i) LEGAL

    // Uncommenting any illegal assignment will cause a compile-time error
    // p = i;         // (a) ILLEGAL
    // *p = &i;       // (b) ILLEGAL
    // &p = q;        // (c) ILLEGAL
    // p = &q;        // (d) ILLEGAL
    p = *&q; // (e) LEGAL
    // p = *q;        // (g) ILLEGAL
    // *p = q;        // (h) ILLEGAL

    printf("i = %d\n", i);
    printf("*p = %d\n", *p);
    printf("*q = %d\n", *q);

    return 0;
}
