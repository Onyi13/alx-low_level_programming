#include "main.h"
/**
* _strspn - Gets the length of a prefix substring.
* @s: String to be scanned.
* @accept: String containing the characters to match.
* Return: Number of characters
* in s that consists only of characters in accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
char *start_accept = accept;
while (*s) {
while (*accept) {
if (*s == *accept) {
count++;
break; }
accept++; }
if (!*accept)
return (count);
s++;
accept = start_accept; }
return (count); }
