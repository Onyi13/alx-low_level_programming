#include "main.h"
/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to be written.
 * Return: On success, returns
 * the number of characters written.
 * Otherwise, it returns a negative value.
 */
void _puts(char *s) {
while (*s)
_putchar(*s++); }
