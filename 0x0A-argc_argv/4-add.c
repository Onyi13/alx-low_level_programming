#include <stdio.h>
#include <stdlib.h>
/**
* main - adds positive numbers
* @argc: number of command line arguments
* @argv: array of command line arguments
* Return: 0 on success
* 1 if any of the numbers contain non-digits
*/
int main(int argc, char *argv[])
{int i, sum = 0;
for (i = 1; i < argc; i++)
{char *s = argv[i];
while (*s)
{
if (*s < '0' || *s > '9')
{printf("Error\n");
return (1); }
s++; }
sum += atoi(argv[i]); }
printf("%d\n", sum);
return (0); }

