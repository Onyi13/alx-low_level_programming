#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: String to be searched.
 * @needle: Substring to be located.
 * Return: Pointer to the beginning
 * of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{int i, j;
if (*needle == '\0')
return (haystack);
for (i = 0; haystack[i]; i++)
{for (j = 0; needle[j] && (haystack[i + j] == needle[j]); j++);
if (needle[j] == '\0')
return (haystack + i); }
return (NULL); }
