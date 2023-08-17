#include "main.h"
/**
 * print_numbers - Prints the numbers from 0 to 9.
 */
void print_numbers(void)
{int num;
for (num = 0; num < 10; num++)
{_putchar(num + '0'); }
_putchar('\n'); }
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{print_numbers();
return (0); }
