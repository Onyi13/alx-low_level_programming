#include "main.h"
#include <stddef.h>
/**
* _strpbrk - Locates the first occurrence
* in string s of any of the bytes in string accept.
* @s: The string to be searched.
* @accept: The string containing the bytes to match.
* Return: Pointer to the byte in
* s that matches one of the bytes in accept,
* or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
while (*s) {
char *a = accept;
while (*a) {
if (*s == *a)
return (s);
a++; }
s++; }
return (NULL); }
