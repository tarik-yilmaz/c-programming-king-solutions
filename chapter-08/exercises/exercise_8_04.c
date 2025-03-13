/*
 * Chapter 8, Exercise 4 – Weekend Array Declaration with Designated Initializer
 * ---------------------------------------------------------------------------
 * Using C99 designated initializers, declare an array named weekend containing seven bool values.
 * Initialize only the first element (index 0) and the last element (index 6) to true;
 * all other elements will default to false.
 *
 * Final solution:
 */
#include <stdbool.h>

bool weekend[7] = { [0] = true, [6] = true };
