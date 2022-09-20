#include "main.h"

/**
 * _strlen - returns the length of an int
 *
 * @s char to check
 *
 * Description: this will check the lenth of an int an return its value
 * Return: an int
 */

int _strlen(char *s)
{
	int n = 0;

	for (; *s++;)
		n++;
	return (n);
}

