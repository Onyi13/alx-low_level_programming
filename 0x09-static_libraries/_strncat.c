#include "main.h"
/**
* _strncat - Concatenates two strings
* using at most n bytes from src.
* @dest: The destination string.
* @src: The source string.
* @n: Maximum number of bytes to be used from src.
* Return: Pointer to the destination string.
*/
char *_strncat(char *dest, char *src, int n)
{
char *original_dest = dest;
while (*dest)
dest++;
while (n-- && *src)
*dest++ = *src++;
if (!n)
*dest = '\0';
return (original_dest); }
