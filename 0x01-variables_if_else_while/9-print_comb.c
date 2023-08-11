#include <stdio.h>
/**
* main - Prints combinations of single-digit numbers
* Description: Outputs are in ascending order
* Return: 0
*/
int main(void)
{int i;
for(i=0;i<10;i++)
{putchar(i);
if(i!= 8)
{putchar(','); }}
putchar('\n');
return (0);}
