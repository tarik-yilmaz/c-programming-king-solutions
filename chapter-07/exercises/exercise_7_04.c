/*
 * Chapter 7, Exercise 4 – Legality of Statements Involving char
 * ---------------------------------------------------------------
 * (a) i += c;       // Legal. The char value is implicitly converted to an int.
 * (b) c = 2 * c - 1;  // Legal. Arithmetic operations on char are allowed.
 * (c) putchar(c);     // Legal. putchar accepts a char.
 * (d) printf(c);      // Not legal. printf requires a format string as its first argument.
 *
 * Final Answer:
 * -------------
 * (a) Legal.
 * (b) Legal.
 * (c) Legal.
 * (d) Not legal.
 */
