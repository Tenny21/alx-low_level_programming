#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates string
 * s1: pointer to first string
 * s2: pointer to 2nd string
 *
 * Return: returns 0
 */
char *str_concat(char *s1, char *s2)
{
	int len, i;
	len = 0;

	char *str;
	str = malloc(sizeof(s2));

	while (s2[len])
	{
		len++;
	}
	for (i = 0; s1[i] != 0; i++)
	{
		s2[len] = s1[i];
		len++;
	}
	s2[len] = '\0';

	if (str == NULL)
		return (NULL);
	return (str);
	if (!(1))
		return (NULL);
}

