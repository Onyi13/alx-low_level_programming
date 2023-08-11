#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase
 * Description: This program will print
 * the alphabet in reverse from z
 * Return: 0
 */
int main(void)
{char c;
for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0); }
