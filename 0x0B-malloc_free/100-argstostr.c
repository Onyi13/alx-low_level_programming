#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: argument count
 * @av: pointer to argument vectors
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{char *new_str, *start;
int i, j, total_len = 0;
if (ac == 0 || av == NULL)
{return (NULL); }
/* Calculate total length of concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{total_len++; }
total_len++; /* For the newline after each argument */ }
new_str = malloc(total_len + 1); /* +1 for the null byte */
if (new_str == NULL)
{return (NULL); }
start = new_str;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{*new_str = av[i][j];
new_str++; }
*new_str = '\n';
new_str++; }
*new_str = '\0';
return (start); }
