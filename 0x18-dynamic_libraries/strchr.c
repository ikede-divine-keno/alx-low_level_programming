#include "main.h"
/**
 * _strchr - Returns a pointer to the first occurrence of the
 * character c in the string s, or NULL if the character
 *  is not found
 * @s:string to be seaeched through
 * @c: character to be searched
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int m;

	for (m = 0; s[m] >= '\0'; m++)
	{
		if (s[m] == c)
			return (&s[m]);
	}
	return (0);
}
