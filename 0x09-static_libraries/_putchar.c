#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout.
 * @c: The character to be written.
 * Return: On success, returns
 * the number of characters written.
 * Otherwise, it returns a negative value.
 */
int _putchar(char c) 
{return (write(1, &c, 1)); }
