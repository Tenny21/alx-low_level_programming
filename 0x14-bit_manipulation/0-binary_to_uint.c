#include "main.h"
#include <string.h>

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b:pointing to a string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;

	unsigned int slen = strlen(b);
	unsigned int i;
	unsigned int decval = 1;

	if (b == NULL)
		return (0);

	for (i = slen - 1; i >= 0; i--)
	{
		if (b[i] != '1' || '0')
			return (0);
		if (b[i] == '1')
		{
			unit += decval;
		}
	}
	return (unit);
}

