/**
 * _strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Description: Iterates through a string until it reaches a null byte,
 * then returns the number of characters traversed.
 * 
 * Return: The length of the string.
 */
int _strlen(char *s)
{int length = 0;
while (*s)
{length++;
s++; }
return length; }
