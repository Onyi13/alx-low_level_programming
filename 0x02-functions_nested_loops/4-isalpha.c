#include "main.h"
/**
 * _isalpha - Checks for an alphabetic character.
 * @c: The character to check. 
 * Return: 1 if the character is an alphabet, 0 otherwise.
 */
int _isalpha(int c)
{if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1); }
return (0); }
