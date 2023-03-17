#include<stdio.h>

/**
 * main - Prints the alphabet in lowercase in reverse followed by a new line.
 *
 * Return: value 0.
 */

int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');

	return (0);
}
