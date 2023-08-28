#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Initial segment to check.
 * @accept: Bytes of accepted characters.
 * Return: Number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{unsigned int count = 0;
char *orig_accept;
orig_accept = accept;
while (*s)
{
while (*accept)
{
if (*s == *accept)
{count++;
break; }
accept++; }
if (!(*accept))
return (count);
accept = orig_accept;
s++; }
return (count); }
