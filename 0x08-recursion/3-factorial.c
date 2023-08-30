#include <stdio.h>
/**
 * factorial - Returns the
 * factorial of a given number.
 * @n: The number to get the factorial of.
 * Return: The factorial of n.
 * If n is lower than 0, return -1.
 */
int factorial(int n)
{
if (n < 0)
{return (-1); }
if (n == 0)
{return (1); }
return (n * factorial(n - 1)); }
