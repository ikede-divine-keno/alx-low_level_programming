#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: integer
 *
 * Return: 1 if n == 0, -1 if n < 0 to indicate error.
 * else return factorial for n > 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
