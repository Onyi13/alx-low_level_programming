#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{int i = 0;
int temp;
n--;
while (i < n)
{temp = a[i];
a[i] = a[n];
a[n] = temp;
i++;
n--; }}
