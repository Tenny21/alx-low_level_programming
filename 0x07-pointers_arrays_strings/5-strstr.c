#include "main.h"

/**
 * _strstr - locates a subsring
 * @haystack: ...
 * @needle: ...
 *
 * Return: returns a pointer to the var
 */
char *_strstr(char *haystack, char *needle)
{
	int index;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[index] == needle[index])
		{
			do {
				if (needle[index + 1] == '\0')
					return (haystack);

				index++;
			} while (haystack[index] == needle[index]);
		}
		haystack++;
	}
	return ('\0');
}

