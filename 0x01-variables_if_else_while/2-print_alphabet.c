#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * Description: This program will print the alphabet in lowercase using only putchar
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
