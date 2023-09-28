#include "main.h"
/**
*get_endianness - Checks the system's endianness.
*Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{union
{unsigned int i;
char c; }
u;
u.i = 1;
return (u.c); }
