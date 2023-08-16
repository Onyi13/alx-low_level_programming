#include <stdio.h>
/**
* main - Entry point of the application.
* Description: This program calculates and prints the sum
* of even-valued Fibonacci numbers that do not exceed 4,000,000.
* Return: Returns 0 upon successful run.
*/
int main(void)
{unsigned long int t1 = 1, t2 = 2, next_term = t1 + t2, sum = t2;
while (next_term <= 4000000)
{
if (next_term % 2 == 0)
sum += next_term;
t1 = t2;
t2 = next_term;
next_term = t1 + t2; }
printf("%lu\n", sum);
return (0); }
