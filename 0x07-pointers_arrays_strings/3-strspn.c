#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: char
 * @accept: char
 * Return: the number of bytes in the initial
 * segment of s which consist only of bytes from
 * accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b = 0;
	unsigned int n = 0;

	while (s[b] != ' ' && s[b] != '\0')
	{
		while (accept[a] != '\0')
		{
			if (s[b] == accept[a])
				n++;
			a++;
		}
		b++;
		a = 0;
	}
	return (n);
}
