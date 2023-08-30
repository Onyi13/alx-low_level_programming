#include <stdio.h>
/**
 * wildcmp - Compares two strings and returns 1
 * if they are considered identical
 * @s1: First string
 * @s2: Second string
 * Return: 1 if strings are identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{return (1); }
if (*s1 == *s2)
{return (wildcmp(s1 + 1, s2 + 1)); }
if (*s2 == '*')
{
if (*(s2 + 1) == '*' || wildcmp(s1, s2 + 1))
{return (1); }
if (*s1 != '\0' && wildcmp(s1 + 1, s2))
{return (1); }}
return (0); }
