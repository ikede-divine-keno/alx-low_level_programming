#include<stdio.h>

/**
 * main - checks for and prints the largest prime factor of 612852475143
 *        followed by a new line.
 *
 *        Return: Always 0.
 */

int main(void)
{
	long x, y;

	x = 612852475143;

	for (y = 2; x > y; y++)
	{
		while (x % y == 0)
		{
			x = x / y;
		}
	}
	printf("%lu", y);
	putchar('\n');
	return (0);
}
