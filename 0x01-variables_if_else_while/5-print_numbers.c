#include<stdio.h>

/**
 * main - Prints single digits of base 10 starting from 0.
 *
 * Return: value 0.
 */

int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');

	return (0);
}
