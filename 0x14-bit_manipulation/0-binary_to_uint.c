#include "main.h"
/**
*binary_to_uint - Converts binary to unsigned int.
*@b: Binary string.
*Return: Converted number or 0 if invalid char or b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{unsigned int num = 0;
int base = 1;
int i;
if (!b) return (0);
for (i = 0; b[i]; i++)
if (b[i] != '0' && b[i] != '1') return (0);
for (i = i - 1; i >= 0; i--)
{
if (b[i] == '1') num += base;
base *= 2; }
return (num); }
