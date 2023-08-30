#include <stdio.h>
/**
 * check_prime - Checks for prime number recursively.
 * @num: The number to check.
 * @i: The current divisor.
 * Return: 1 if the number is prime, 0 otherwise.
 */
int check_prime(int num, int i)
{
if (i * i > num)
{return (1); }
if (num % i == 0)
{return (0); }
return (check_prime(num, i + 1)); }
/**
 * is_prime_number - Returns 1 if the input integer
 * is a prime number, otherwise 0.
 * @n: The number to check.
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n < 2)
{return (0); }
return (check_prime(n, 2)); }
