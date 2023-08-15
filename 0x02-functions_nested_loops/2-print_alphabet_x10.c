#include <stdio.h>
void _putchar(char c)
{putchar(c); }
/**
 * print_alphabet - prints the lowercase alphabet
 */
void print_alphabet(void)
{char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{_putchar(letter); }
_putchar('\n'); }
/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times
 * Description: This function uses a loop to call the print_alphabet 
 * function 10 times.
 */
void print_alphabet_x10(void)
{int i;
for (i = 0; i < 10; i++){print_alphabet(); }}
int main(void)
{print_alphabet_x10();return (0); }
