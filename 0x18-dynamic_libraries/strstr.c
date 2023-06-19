#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack. The terminating null bytes
 * (\0) are not compared.
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return ('\0');
}
