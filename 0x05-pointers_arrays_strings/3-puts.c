#include <stdio.h>
/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: The string to be printed.
 * Description: This function takes a string as
 * an argument and iterates through it
 * to print each character to the standard output, then prints a new line.
 */
void _puts(char *str)
{
while (*str)
{putchar(*str);
str++; }
putchar('\n'); }
