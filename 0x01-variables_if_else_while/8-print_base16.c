#include <stdio.h>
/**
* main - Prints numbers of base 16 in lowercase
* Description: Using putchar, prints 0-9 and a-f
* Return: 0
*/
int main(void)
{int num;
for (num = 48; num < 58; num++)
putchar(num);
for (num = 97; num < 103; num++)
putchar(num);
putchar('\n');
return (0);}
