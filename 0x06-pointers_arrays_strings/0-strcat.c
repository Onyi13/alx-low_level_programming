#include "main.h"
/**
 * _strcat - Appends the `src` string to the `dest` string.
 * @dest: The destination string.
 * @src: The source string.
 * Description: This function appends the `src`
 * string to the `dest` string,
 * overwriting the terminating null byte (`\0`)
 * at the end of `dest`, and then
 * adds a terminating null byte. Assumes `dest`
 * has enough space to hold the result. 
 * Return: A pointer to the resulting string `dest`.
 */
char *_strcat(char *dest, char *src)
{char *original_dest = dest;
while (*dest)
{dest++; }
while (*src)
{*dest = *src;
dest++;
src++; }
*dest = '\0';
return (original_dest); }
