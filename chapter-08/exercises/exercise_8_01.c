/*
 * Chapter 8, Exercise 1 – Array Size Calculation Technique
 * ---------------------------------------------------------
 * The expression sizeof(a) / sizeof(a[0]) computes the number of elements in an array
 * by dividing the total size of the array by the size of its first element.
 *
 * In contrast, using sizeof(a) / sizeof(t), where t is the type of a's elements, is
 * considered inferior because:
 * 1. It requires manually specifying the type of the array's elements (t), which is
 *    more error-prone and less maintainable. If the array's element type changes, you
 *    must update the type t accordingly.
 * 2. sizeof(a[0]) automatically adapts to the actual type of the array's elements,
 *    ensuring that the calculation is always correct.
 * 3. The expression sizeof(a) / sizeof(a[0]) is more intuitive and directly relates to
 *    the array, whereas sizeof(t) does not reflect the array's contents.
 *
 * Final Answer:
 * -------------
 * The expression sizeof(a) / sizeof(a[0]) is superior because it is type-safe, automatically
 * adapts to changes in the array's element type, and is less error-prone.
 */
