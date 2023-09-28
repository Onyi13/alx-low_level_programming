#include "main.h"
/**
*get_bit - Value of bit at index.
*@n: Number.
*@index: Index of bit to retrieve.
*Return: Bit at index or -1 on error.
*/
int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(unsigned long int) * 8))
return (-1);
return ((n >> index) & 1); }
