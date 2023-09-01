#include "main.h"
/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to be written.
 * Return: On success, returns
 * the number of characters written.
 * Otherwise, it returns a negative value.
 */
int _strlen(char *s) {
int len = 0;
while (*s++) len++;
return (len); }
