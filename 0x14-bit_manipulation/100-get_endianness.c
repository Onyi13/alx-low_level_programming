#include "main.h"
#include <stdio.h>
/**
 * get_endianness - Checks the
 * endianness of the system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{unsigned int check_endian = 1;
char *endian_check = (char *)&check_endian;
return (*endian_check); }
