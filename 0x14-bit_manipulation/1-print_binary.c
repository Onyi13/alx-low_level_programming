#include <stdio.h>
/**
 * print_binary - Prints the binary
 * representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n) {
unsigned long int mask = 1UL << 63;
int flag = 0;
if (n == 0)
{putchar('0');
return; }
while (mask > 0) {
if ((n & mask) != 0)
{putchar('1');
flag = 1; }
else if (flag)
{putchar('0'); }
mask >>= 1; }}
