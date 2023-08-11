#include <stdio.h>
/**
* main - Prints combinations of single-digit numbers
* Description: Outputs are in ascending order
* Return: 0
*/
int main(void)
{int i,j;
for(i=0;i<10;i++)
for(j=i+1;j<10;j++)
{putchar(i+'0');
putchar(j+'0');
if(i!=8||j!=9)
{putchar(','); }}
putchar('\n');
return (0);}
