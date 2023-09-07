#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - Concatenates two strings up to n.
* @s1: First string.
* @s2: Second string.
* @n: Maximum bytes to use from s2.
* Return: Pointer to concatenated string.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{unsigned int len1 = 0, len2 = 0, i, j;
char *concat;
if (!s1)
s1 = "";
if (!s2)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2] && len2 < n)
len2++;
if (n >= len2)
concat = malloc(len1 + len2 + 1);
else
concat = malloc(len1 + n + 1);
if (!concat)
return (NULL);
for (i = 0; s1[i]; i++)
concat[i] = s1[i];
for (j = 0; j < len2 && j < n; j++, i++)
concat[i] = s2[j];
concat[i] = '\0';
return (concat); }
