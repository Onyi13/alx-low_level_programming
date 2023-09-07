#include "main.h"
#include <stdlib.h>
/**
* _calloc - Allocates memory for an array and sets memory to zero.
* @nmemb: Number of members.
* @size: Size of each member.
* Return: Pointer to allocated memory or NULL if failure.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{unsigned int i;
char *memory;
if (nmemb == 0 || size == 0)
return (NULL);
memory = malloc(nmemb * size);
if (!memory)
return (NULL);
for (i = 0; i < (nmemb * size); i++)
memory[i] = 0;
return (void *)memory; }
