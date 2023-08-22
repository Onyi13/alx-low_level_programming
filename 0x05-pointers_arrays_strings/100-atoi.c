/**
 * _atoi - Convert a string to an integer.
 * @s: String to be converted.
 * Return: The integer value of the converted string.
 * If there are no digits in the string, returns 0.
 */
int _atoi(char *s)
{int result = 0;
int sign = 1;
int started = 0;
while (*s)
{
if (*s >= '0' && *s <= '9')
{started = 1;
result = result * 10 + (*s - '0'); }
else
{
if (started)
{break; }
if (*s == '-')
{sign *= -1; }}
s++; }
return result * sign; }
