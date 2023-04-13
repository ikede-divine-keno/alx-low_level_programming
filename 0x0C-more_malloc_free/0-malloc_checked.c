#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - the malloc_checked function should cause normal process
 * termination with a status value of 98 if malloc fails.
 * @b: integer
 * Return: Output.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == 0)
		exit(98);
	return (p);
}
