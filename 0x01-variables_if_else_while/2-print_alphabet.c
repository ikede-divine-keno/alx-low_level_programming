#include<stdio.h>

/**
 * main - Prints the alphabet in lowercase followed by a new line.
 *
 * Return: value 0.
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	putchar('\n');

	return (0);
}
