#include <stdio.h>
/**
 * main - Entry point of the application.
 * Description: This program calculates and prints the sum of all
 * multiples of 3 or 5 below 1024.
 * Return: Returns 0 upon successful run.
 */
int main(void)
{int i;
int sum = 0;
for (i = 1; i < 1024; i++)
{if (i % 3 == 0 || i % 5 == 0)
{sum += i; }}
printf("%d\n", sum);
return (0);}
