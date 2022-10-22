#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * print_list - prints every element of a list
 * @h: const pointer of user-defined type list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;

	size_t num_nodes = 0;

	while (p != NULL)
	{
		if (p->str != NULL)
			printf("[%d] %s\n", p->len, p->str);
		else
			printf("[0] (nil)\n");

		num_nodes += 1;
		p = p->next;
	}
	return (num_nodes);
}

