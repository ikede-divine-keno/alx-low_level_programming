#include "main.h"

/**
 * _isalpha - Checks for lower and uppercase characters.
 * @c: The character in ASCII code.
 *
 * Return: 1 if true 0 if otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
