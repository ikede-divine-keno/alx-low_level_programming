#include<stdio.h>

/**
 * main - Prints the alphabet in lowercase and then uppercase
 *        followed by a new line.
 *
 * Return: value 0.
 */

int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);
	for (y = 'A'; y <= 'Z'; y++)
		putchar(y);
	putchar('\n');

	return (0);
}
