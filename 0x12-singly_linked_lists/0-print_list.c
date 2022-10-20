#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints every element of a list
 * @h: const pointer of user-defined type list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	list_t *p;
	size_t num_nodes = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
	{
		printf("[%d] (%s)\n", h->len, h->str);
		num_nodes++;
	}
	if (h->str == NULL && h->next == NULL)
		return (-1);
	p = h->next;
	while (p != NULL)
	{
		num_nodes++;
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] (%s)\n", p->len, p->str);
		p = p->next;
	}

	return (num_nodes);
}

