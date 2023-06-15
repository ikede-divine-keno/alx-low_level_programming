#include <stdio.h>

void __attribute__((constructor)) victory(void);

/**
 * victory - Prints a string before the
 *        main function is executed.
 */
void victory(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
