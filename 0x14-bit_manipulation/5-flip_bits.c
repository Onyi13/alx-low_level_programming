#include "main.h"
/**
*flip_bits - Returns the number of bits to flip
*from one number to another.
*@n: First number.
*@m: Second number.
*Return: Number of bits you would need to flip
*to get from one number to another.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{unsigned long int xored = n ^ m;
unsigned int count = 0;
while (xored)
{count += xored & 1;
xored >>= 1; }
return (count); }
