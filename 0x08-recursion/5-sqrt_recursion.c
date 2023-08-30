#include <stdio.h>
/**
 * find_root - Recursively
 * searches for the natural square root.
 * @num: The number to find the square root of.
 * @root: The current number to check.
 * Return: The natural square root, or -1 if none.
 */
int find_root(int num, int root)
{
if (root * root == num)
{return (root); }
if (root * root > num)
{return (-1); }
return (find_root(num, root + 1)); }
/**
 * _sqrt_recursion -
 * Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * Return: The natural square root, or -1 if none.
 */
int _sqrt_recursion(int n)
{if (n < 0)
{return (-1); }
return (find_root(n, 0)); }
