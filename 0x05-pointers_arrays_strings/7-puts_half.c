#include <stdio.h>
/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to be processed.
 *
 * Description: This function prints the second half of the string.
 * If the number of characters is odd, it prints the last n characters
 * where n = (length_of_the_string - 1) / 2.
 */
void puts_half(char *str)
{int length = 0, i, start;
while (str[length])
{length++; }
if (length % 2 == 0)
{start = length / 2; }
else
{start = (length - 1) / 2 + 1; }
for (i = start; i < length; i++)
{putchar(str[i]); }
putchar('\n'); }
