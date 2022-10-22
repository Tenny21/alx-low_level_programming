#include <stdio.h>

void mystartupfun(void) __attribute__ ((constructor));

/**
 * mystartupfun - is function that executes before the main function in c
 *
 * takes no argument
 * Return: void
 */
void mystartupfun(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

