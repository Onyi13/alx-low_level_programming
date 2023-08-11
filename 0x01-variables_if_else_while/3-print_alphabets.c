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
char c;
for (c = 'a'; c <= 'z'; c++)
for (c = 'A'; c <= 'Z'; c++)
putchar(c);
putchar('\n');
return (0);
}
