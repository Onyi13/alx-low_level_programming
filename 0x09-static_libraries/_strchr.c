#include "main.h"
#include <stddef.h>
/**
* _strchr - Locates the first occurrence of character c in string s.
* @s: String to be searched.
* @c: Character to search for.
* Return: Pointer to the first occurrence of the character c in string s,
* or NULL if the character is not found.
*/
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s == c)
return (s);
s++; }
if (c == '\0')
return (s);
return (NULL); }
