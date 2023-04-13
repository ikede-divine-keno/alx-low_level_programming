#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array of nmemb elements of size bytes
* each and returns a pointer to the allocated memory.
* @nmemb: number of elements in array.
* @size: size of array.
* Return: Pointer.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, d;

	d = nmemb * size;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	p = malloc(d);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (d); i++)
	{
		p[i] = 0;
	}
	return (p);
}
