#include "main.h"

/**
 * print_alphabet - Prints the letters of the alphabet in lowercase.
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
