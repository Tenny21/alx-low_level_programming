#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: seperates
 * @n: num of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *v;


	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(ap, char*);
		if (v != NULL)
			printf("%s", v);
		else
			printf("(nil)");
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

