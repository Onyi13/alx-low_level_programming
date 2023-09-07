#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* Checks if string is all digits.
*/
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++; }
return (1); }
/**
* Prints error and exits program.
*/
void error_exit(void)
{printf("Error\n");
exit(98); }
/**
* Main function.
*/
int main(int argc, char *argv[])
{long num1, num2;
if (argc != 3)
error_exit();
if (!is_digit(argv[1]) || !is_digit(argv[2]))
error_exit();
num1 = atol(argv[1]);
num2 = atol(argv[2]);
printf("%ld\n", num1 * num2);
return (0); }
