#include <stdio.h>
/**
 * main - Entry point of the application.
 * Description: This program calculates and prints the first 50
 * Fibonacci numbers, starting with 1 and 2.
 * Return: Returns 0 upon successful run.
 */
int main(void)
{unsigned long int i, t1 = 1, t2 = 2, next_term;
printf("%lu, %lu", t1, t2);
for (i = 3; i <= 50; i++)
{next_term = t1 + t2;
printf(", %lu", next_term);
t1 = t2;
t2 = next_term; }
printf("\n");
return (0); }
