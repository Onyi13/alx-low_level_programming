#include <stdio.h>
/**
 * print_array - Prints n elements of
 * an array of integers, followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements of the array to be printed.
 * Description: This function prints
 * the first n elements of the array.
 * Numbers are separated by a comma followed by a space.
 */
void print_array(int *a, int n)
{int i;
for (i = 0; i < n; i++)
{printf("%d", a[i]);
if (i != n - 1)
{printf(", "); }}
putchar('\n'); }
