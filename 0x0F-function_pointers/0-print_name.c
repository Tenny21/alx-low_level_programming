#include "function_pointers.h"

/**
 * print_name - prints name, takes a function pointer
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
