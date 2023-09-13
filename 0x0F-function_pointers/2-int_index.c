#include "function_pointers.h"
/**
*int_index - searches for an integer in an array
*@array: pointer to the array
*@size: number of elements in the array
*@cmp: pointer to the comparison function
*Return: index of the first match, -1 if no match or size <= 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{int i;
if (!array || !cmp || size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i); }
return (-1); }
