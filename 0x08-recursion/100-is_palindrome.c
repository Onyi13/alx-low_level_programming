#include <stdio.h>
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to get the length of.
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{return (0); }
return (1 + _strlen_recursion(s + 1)); }
/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 * @len: Length of the string.
 * @i: Index to compare.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int len, int i)
{
if (i >= len / 2)
{return (1); }
if (s[i] != s[len - i - 1])
{return (0); }
return (check_palindrome(s, len, i + 1)); }
/**
 * is_palindrome - Returns 1 if a string
 * is a palindrome and 0 if not.
 * @s: The string to check.
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{int len = _strlen_recursion(s);
return (check_palindrome(s, len, 0)); }
