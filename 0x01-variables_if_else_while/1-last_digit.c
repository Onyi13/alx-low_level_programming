#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Print the last digit of the number stored in the variable n
 * Description: Obtain the last digit of n and print whether it's
 * greater than 5, 0, or less than 6 and not 0.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10; /* Extract the last digit of n */
printf("Last digit of %d is %d", n, last_digit);
if (last_digit > 5)
printf(" and is greater than 5\n");
else if (last_digit == 0)
printf(" and is 0\n");
else
printf(" and is less than 6 and not 0\n");
return (0);
}
