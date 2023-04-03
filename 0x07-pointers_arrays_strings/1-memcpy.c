#include "main.h"
/**
 * _memcpy - function that copies memory area
 *@dest: memory area n is copied to
 *@src: memory area n is copied from
 *@n: number of bytes
 *
 * Return: char with result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
