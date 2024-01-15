#include "main.h"
/**
 * _strncat - Appends the first `n` bytes of the `src`
 * string to the `dest` string.
 * @dest: The destination string.
 * @src: The source string.
 * @n: Maximum number of bytes to be appended from `src`.
 * Description: This function appends the first
 * `n` bytes of the `src` string to
 * the `dest` string, overwriting the terminating
 * null byte (`\0`) at the end
 * of `dest`, and then adds a terminating null byte.
 * If `src` contains `n` or more bytes,
 * it will use only `n` bytes, and it will not
 * look for a null terminator. 
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{char *original_dest = dest;
int bytes_appended = 0;
while (*dest)
{dest++; }
while (bytes_appended < n && *src)
{*dest = *src;
dest++;
src++;
bytes_appended++; }
*dest = '\0';
return (original_dest); }
