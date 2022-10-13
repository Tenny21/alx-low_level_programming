#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints nums
 * @separator: string
 * @n: num count
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int v;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		v = va_arg(ap, int);
		printf("%d", v);
		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}

