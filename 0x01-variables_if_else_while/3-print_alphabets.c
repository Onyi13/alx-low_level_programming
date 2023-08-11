#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * and lower case
 * Description: This program will print
 * the alphabet in lowercase using only putchar
 * Return: 0
 */
int main(void)
{
char c, d;
for (c = 'a'; c <= 'z'; c++)
for (d = 'A'' d <= 'Z'; d++)
putchar("%c""%c", c,d);
putchar('\n');
return (0);
}
