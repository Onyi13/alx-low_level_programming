#include <stdio.h>
#include <stdlib.h>
/**
* main - calculates minimum number of coins for change
* @argc: number of arguments
* @argv: array of command line arguments
* Return: 0 on success, 1 if error
*/
int main(int argc, char *argv[])
{int amount, coins = 0;
if (argc != 2)
{printf("Error\n");
return (1); }
amount = atoi(argv[1]);
if (amount < 0)
{printf("0\n");
return (0); }
while (amount)
{
if (amount >= 25)
{coins++;
amount -= 25; }
else if (amount >= 10)
{coins++;
amount -= 10; }
else if (amount >= 5)
{coins++;
amount -= 5; }
else if (amount >= 2)
{coins++;
amount -= 2; }
else
{coins++;
amount--; }}
printf("%d\n", coins);
return (0); }
