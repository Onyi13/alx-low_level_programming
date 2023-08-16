#include <stdio.h>
#include <string.h>
/**
 * add_strings - Add two numbers represented as strings.
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * Description: The function assumes that the buffer r has enough space.
 */
void add_strings(char n1[309], char n2[309], char r[309])
{int i, carry = 0;
for (i = 308; i >= 0; i--)
{int sum = (n1[i] - '0') + (n2[i] - '0') + carry;
r[i] = (sum % 10) + '0';
carry = sum / 10; }}
/**
 * main - Entry point of the application.
 * Description: This program prints the first 98 Fibonacci numbers.
 * Return: Returns 0 upon successful run.
 */
int main(void)
{char a[309] = "0", b[309] = "1";
char tmp[309];
int i;
for (i = 0; i < 309; i++)
{a[i] = '0';
b[i] = '0'; }
b[308] = '1';
printf("%s, ", b);
for (i = 2; i < 98; i++)
{add_strings(a, b, tmp);
printf("%s", tmp);
if (i != 97)
printf(", ");
strncpy(a, b, 309);
strncpy(b, tmp, 309); }
printf("\n");
return (0); }
