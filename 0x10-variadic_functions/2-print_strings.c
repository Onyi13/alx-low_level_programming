#include "variadic_functions.h"
#include <stdio.h>
/**
*print_strings - prints strings, followed by a new line
*@separator: string to be printed between the strings
*@n: the number of strings passed to the function
*Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{va_list strs;
unsigned int i;
char *str;
va_start(strs, n);
for(i = 0; i < n; i++)
{str = va_arg(strs, char*);
if(!str)
printf("(nil)");
else
printf("%s", str);
if(i != n - 1 && separator)
printf("%s", separator); }
printf("\n");
va_end(strs); }
