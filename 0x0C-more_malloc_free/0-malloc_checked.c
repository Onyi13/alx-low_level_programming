#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - Allocates memory.
* @b: Size to allocate.
* Return: Pointer to allocated memory.
*/
void *malloc_checked(unsigned int b)
{void *ptr;
ptr = malloc(b);
if (!ptr)
exit(98);
return (ptr); }
