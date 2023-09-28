#include "main.h"
/**
*set_bit - Sets value of bit at index to 1.
*@n: Pointer to number.
*@index: Index of bit to set.
*Return: 1 if succeeded, -1 if error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
return (-1);
*n |= (1 << index);
return (1); }
