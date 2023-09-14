#include "variadic_functions.h"
#include <stdio.h>
/**
*print_numbers - prints numbers, followed by a new line
*@separator: string to be printed between numbers
*@n: the number of integers passed to the function
*Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{va_list numbers;
unsigned int i;
va_start(numbers, n);
for(i = 0; i < n; i++)
{printf("%d", va_arg(numbers, int));
if(i != n - 1 && separator)
printf("%s", separator); }
printf("\n");
va_end(numbers); }
