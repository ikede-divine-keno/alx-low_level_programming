#include<stdio.h>

/**
 * main - Prints all letters of the alphabet in lowercase except letters q and
 *        e followed by a new line.
 *
 * Return: value 0.
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		if (x != 'q' && x != 'e')
			putchar(x);
	putchar('\n');

	return (0);
}
