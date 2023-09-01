#include "main.h"
/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to be written.
 * Return: On success, returns
 * the number of characters written.
 * Otherwise, it returns a negative value.
 */
char *_strcat(char *dest, char *src) {
char *original_dest = dest;
/* Move to the end of dest */
while (*dest) {
dest++; }
/* Copy src to dest */
while (*src) {
*dest = *src;
dest++;
src++; }
*dest = '\0';
return (original_dest); }
