#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints element of a list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

