#include <stdio.h>
/**
* main - Prints all possible combinations of two two-digit numbers.
* Description: The numbers should range from 0 to 99.
* Return: 0
*/
int main(void)
{int i, j;
for (i = 0; i < 100; i++)
for (j = i + 1; j < 100; j++)
{putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(' ');
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (i != 98 || j != 99)
{putchar(',');
putchar(' '); }}
putchar('\n');
return (0); }
