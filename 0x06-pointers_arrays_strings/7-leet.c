#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode. 
 * Return: Pointer to the encoded string.
 */
char *leet(char *s)
{int i = 0;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
while (s[i])
{
for (int j = 0; letters[j]; j++)
{
if (s[i] == letters[j])
{s[i] = numbers[j];
break; }}
i++; }
return (s); }
