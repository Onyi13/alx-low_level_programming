#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The size of the times table to print.
 */
void print_times_table(int n)
{int row, col, product;
if (n >= 0 && n <= 15)
{for (row = 0; row <= n; row++)
{for (col = 0; col <= n; col++)
{product = row * col;
if (col == 0)
{printf("%d", product); }
else if (product < 10)
{printf(",   %d", product); }
else if (product < 100)
{printf(",  %d", product); }
else
{printf(", %d", product); }}
printf("\n"); }}}
