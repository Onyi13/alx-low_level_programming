#include <stdio.h>
/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 * Description: This function takes a string
 * as an argument, finds its length,
 * and then prints the string in reverse order to the standard output.
 */
void print_rev(char *s)
{int length = 0;
while (s[length])
{length++; }
while (length > 0)
{putchar(s[length - 1]);
length--; }
putchar('\n'); }
