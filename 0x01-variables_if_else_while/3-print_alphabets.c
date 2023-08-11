#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, then in uppercase
 * Description: This program prints the alphabet using putchar
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
