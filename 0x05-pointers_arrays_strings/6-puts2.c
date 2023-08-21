#include <stdio.h>
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: The string to be processed.
 * Description: This function takes a
 * string as an argument and prints every other
 * character, starting with the first character,
 * to the standard output. It then prints
 * a new line at the end.
 */
void puts2(char *str)
{int i = 0;
while (str[i])
{
if (i % 2 == 0)
{putchar(str[i]); }
i++; }
putchar('\n'); }
