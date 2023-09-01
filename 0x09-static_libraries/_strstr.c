#include "main.h"
#include <stddef.h>
/**
* _strstr - Locates a substring.
* @haystack: The main string to be analyzed.
* @needle: The substring to be located.
* Return: Pointer to the beginning of the located substring
* or NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
char *h;
char *n;
if (!*needle)
return (haystack);
while (*haystack) {
h = haystack;
n = needle;
while (*haystack && *n && *haystack == *n) {
haystack++;
n++; }
if (!*n)
return (h);
haystack = h + 1; }
return (NULL); }
