#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: First string
 * @s2: Second string
 * Return: pointer to the newly concatenated string
 * or NULL if failure
 */
char *str_concat(char *s1, char *s2)
{char *concat_str;
unsigned int len1 = 0, len2 = 0, i, j;
if (s1 == NULL)
{s1 = ""; }
if (s2 == NULL)
{s2 = ""; }
while (s1[len1])
{len1++; }
while (s2[len2])
{len2++; }
concat_str = (char *)malloc(len1 + len2 + 1);
if (concat_str == NULL)
{return (NULL); }
for (i = 0; i < len1; i++)
{concat_str[i] = s1[i]; }
for (j = 0; j < len2; j++, i++)
{concat_str[i] = s2[j]; }
concat_str[i] = '\0';
return (concat_str); }
