#include "main.h"
/**
 * _strcpy - Copies the string pointed
 * to by src, including the 
 * terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: Destination buffer.
 * @src: Source string.
 * Return: Pointer to the destination string dest.
 */
char *_strcpy(char *dest, const char *src) {char *original_dest = dest;
while (*src) {
*dest = *src;
dest++;
src++; }
*dest = '\0';
return (original_dest); }
