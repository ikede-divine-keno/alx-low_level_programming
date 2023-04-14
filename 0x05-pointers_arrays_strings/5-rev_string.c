#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string
 * @s: input string
 */

void rev_string(char *s)
{
	int i;
	int j;
	int rev;

	rev = 0;
	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		rev = s[i];
		s[i] = s[j - 1];
		s[j - 1] = rev;
		j--;
	}

}
