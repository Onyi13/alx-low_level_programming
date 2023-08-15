#include <stdio.h>
void _putchar(char c)
{putchar(c); }
/**
 * print_alphabet - prints the lowercase alphabet
 * Description: This function uses a loop to print lowercase letters
 * and uses the _putchar function to print each character.
 */
void print_alphabet(void)
{char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{_putchar(letter); }
_putchar('\n'); }
int main(void)
{print_alphabet();
return (0); }
