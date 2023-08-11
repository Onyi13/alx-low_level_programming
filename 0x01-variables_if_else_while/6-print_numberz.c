#include <stdio.h>
/**
* main - Prints all single digit numbers of base 10 starting from 0
* Description: Using only putchar, prints numbers 0 through 9
* Return: 0
*/
int main(void)
{int i;
for (i = 0; i < 10; i++)
putchar(i + '0');
putchar('\n');
return (0); }
