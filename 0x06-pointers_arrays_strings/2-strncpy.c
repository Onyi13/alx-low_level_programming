#include "main.h"
/**
 * _strncpy - Copies up to `n` characters from the string `src` to `dest`.
 * @dest: The destination string.
 * @src: The source string.
 * @n: Maximum number of characters to be copied. 
 * Return: A pointer to the destination string `dest`.
 */
char *_strncpy(char *dest, char *src, int n)
{int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{dest[i] = src[i]; }
while (i < n)
{dest[i] = '\0';
i++; }
return (dest); }
