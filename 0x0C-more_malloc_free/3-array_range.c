#include "main.h"
#include <stdlib.h>
/**
* array_range - Creates an array of
* integers from min to max.
* @min: Minimum integer value.
* @max: Maximum integer value.
* Return: Pointer to the newly created array.
*/
int *array_range(int min, int max)
{int *array;
int i, range;
if (min > max)
return (NULL);
range = max - min + 1;
array = malloc(range * sizeof(int));
if (!array)
return (NULL);
for (i = 0; i < range; i++, min++)
array[i] = min;
return (array); }
