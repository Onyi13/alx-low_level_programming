#include "main.h"
/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to encode.
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{int i = 0;
while (s[i])
{
if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
{
if ((s[i] > 'M' && s[i] <= 'Z') || (s[i] > 'm' && s[i] <= 'z'))
{s[i] -= 13; }
else
{s[i] += 13; }}
i++; }
return (s); }
