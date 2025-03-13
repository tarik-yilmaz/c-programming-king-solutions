/*
 * Chapter 7, Exercise 13 – Type and Value of Expressions
 * -------------------------------------------------------
 * Given the declarations:
 *
 *     char c = '\1';    // ASCII value is 1
 *     short s = 2;
 *     int i = -3;
 *     long m = 5;
 *     float f = 6.5f;
 *     double d = 7.5;
 *
 * Determine the type and value of each of the following expressions:
 *
 * (a) c * i
 * (b) s + m
 * (c) f / c
 * (d) d / s
 * (e) f - d
 * (f) (int) f
 *
 * Analysis:
 * ---------
 * (a) c * i:
 *     - c (char) is promoted to int, so the multiplication is performed on int values.
 *     - Result type: int
 *     - Value: 1 * (-3) = -3
 *
 * (b) s + m:
 *     - s (short) is promoted to int, but m is long.
 *     - In mixed arithmetic, the int is promoted to long.
 *     - Result type: long
 *     - Value: 2 + 5 = 7
 *
 * (c) f / c:
 *     - f is a float.
 *     - c (char) is promoted to int, then to float for the division.
 *     - Result type: float
 *     - Value: 6.5 / 1 = 6.5
 *
 * (d) d / s:
 *     - d is a double.
 *     - s (short) is promoted to int, then to double.
 *     - Result type: double
 *     - Value: 7.5 / 2 = 3.75
 *
 * (e) f - d:
 *     - f (float) is promoted to double.
 *     - Result type: double
 *     - Value: 6.5 - 7.5 = -1.0
 *
 * (f) (int) f:
 *     - f is cast to int, truncating the fractional part.
 *     - Result type: int
 *     - Value: (int)6.5 = 6
 *
 * Final Answers:
 * --------------
 * (a) c * i:       Type = int,    Value = -3
 * (b) s + m:       Type = long,   Value = 7
 * (c) f / c:       Type = float,  Value = 6.5
 * (d) d / s:       Type = double, Value = 3.75
 * (e) f - d:       Type = double, Value = -1.0
 * (f) (int) f:     Type = int,    Value = 6
 */
