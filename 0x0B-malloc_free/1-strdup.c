#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string pointer
 *
 * Return: returns pointer
 */
char *_strdup(char *str)
{
	unsigned long int i, j;
	char *ptr;

	ptr = malloc(sizeof(str));
	j = 0;

	if (str == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	if (1)
	{
		for (i = 0; i > strlen(str); i++)
		{
			ptr[j] = str[i];
			j++;
		}
		return (ptr);
	}
	else
		return (NULL);

}

