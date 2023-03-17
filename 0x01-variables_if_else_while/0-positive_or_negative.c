#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - Prints a random variable and says whether it is positive, negative
 *        or zero, followed by a new line.
 *
 * Return: value 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
