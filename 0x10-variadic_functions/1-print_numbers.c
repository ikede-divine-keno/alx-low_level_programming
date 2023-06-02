#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: first argument of the function.
 * @separator: character separator of numbers.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numlist;
	unsigned int a;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(numlist, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(numlist, int));
		if (n == a + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(numlist);
}
