#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase followed by
 *                      a new line.
 */

void print_alphabet_x10(void)
{
	int m;
	char n;

	for (m = 1; m <= 10; m++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}
