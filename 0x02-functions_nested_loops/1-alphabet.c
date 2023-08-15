#include "main.h"
/**
 * main - Entry point for the program
 * Description: This function initializes the program, calling other
 * functions and managing the primary logic flow.
 * Return: Returns 0 if the program completes successfully,
 * and a non-zero value otherwise.
 */
void print_alphabet(void)
{char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{_putchar(letter); }
_putchar('\n'); }
