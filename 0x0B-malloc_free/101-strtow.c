#include <stdlib.h>
/**
 * word_count - counts the number of words in a string
 * @str: the string to count words in
 * Return: number of words in str
 */
int word_count(char *str)
{int i = 0, count = 0;
while (str[i])
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
{count++; }
i++; }
return (count); }
/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{int i = 0, j, k, l, wc, len = 0;
char **words;
if (str == NULL || *str == '\0')
return (NULL);
wc = word_count(str);
if (wc == 0)
return (NULL);
words = malloc((wc + 1) * sizeof(char *));
if (words == NULL)
return (NULL);
for (j = 0; j < wc; j++)
{
while (str[i] == ' ')
i++;
len = 0;
while (str[i + len] != ' ' && str[i + len])
len++;
words[j] = malloc((len + 1) * sizeof(char));
if (words[j] == NULL)
{
for (k = 0; k < j; k++)
free(words[k]);
free(words);
return (NULL); }
for (l = 0; l < len; l++, i++)
words[j][l] = str[i];
words[j][l] = '\0'; }
words[wc] = NULL;
return (words); }
