#include <stdio.h>
/**
 * main - Prints alphabet excluding q and e
 * Description: Prints lowercase alphabet without q and e using putchar
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
if (c != 'q' && c != 'e')
putchar(c);
putchar('\n');
return (0);
}
