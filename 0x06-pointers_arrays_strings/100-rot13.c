#include "main.h"
/**
 * rot13 - Encodes a string using rot13.
 * @s: The string to encode.
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{int i = 0;
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
while (s[i])
{
for (int j = 0; alphabet[j]; j++)
{
if (s[i] == alphabet[j])
{s[i] = rotated[j];
break; }}
i++; }
return s; }
