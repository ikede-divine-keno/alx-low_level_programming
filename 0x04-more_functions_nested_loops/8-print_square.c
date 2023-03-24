#include "main.h"

/**
 * print_square - prints a square followed by a new line.
 * @size: The size of the square.
 */

void print_square(int size)
{
	int m, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= size; m++)
		{
			for (n = 1; n <= size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
