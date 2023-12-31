#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 * Return: pointer to the duplicated string, or NULL if failure
 */
char *_strdup(char *str)
{char *duplicate;
unsigned int i, len = 0;
if (str == NULL)
{return (NULL); }
while (str[len])
{len++; }
duplicate = (char *)malloc(len + 1);
if (duplicate == NULL)
{return (NULL); }
for (i = 0; i < len; i++)
{duplicate[i] = str[i]; }
duplicate[i] = '\0';
return (duplicate); }
