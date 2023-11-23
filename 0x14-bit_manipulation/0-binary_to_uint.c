#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: String containing binary digits
 * Return: The converted number, or 0 if an invalid character is present
 */
unsigned int binary_to_uint(const char *b) {
unsigned int result = 0;
if (b == NULL)
return (0);
while (*b != '\0') {
if (*b == '0' || *b == '1')
{result = result << 1;
result += (*b - '0'); }
else
{
return (0); }
b++; }
return (result); }
