#include<stdio.h>

/**
 * main - Prints the numbers from 1 to 100, followed by a new line. But for
 *        multiples of three print Fizz instaed of the number and for multiples
 *        of five print Buzz. For numbers which are multiples of both three and
 *        five print FizzBuzz.
 *
 * Return: always 0 (success).
 */

int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz ");
		}
		else if (n == 100)
		{
			printf("Buzz");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", n);
		}
	}
	printf("\n");

	return (0);
}
