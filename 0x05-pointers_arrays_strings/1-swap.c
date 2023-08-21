void swap_int(int *a, int *b)
/**
 * swap_int - Swaps the values of two integers.
 * @a: First integer pointer.
 * @b: Second integer pointer.
 *
 * Description: Takes in two pointers to integers. A temporary variable is used
 * to hold one of the integer's values, allowing the two integers to be swapped.
 */
{int temp;
temp = *a;
*a = *b;
*b = temp; }
