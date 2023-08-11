#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* betty style doc for function main goes there */
/**
 * main - Determines whether a number is positive, negative, or zero
 *
 * Description: Uses the rand function and prints out whether
 * the generated number is positive, negative, or zero
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n < 0)
printf("%d is negative\n", n);
else
printf("%d is zero\n", n);
return (0);
}
