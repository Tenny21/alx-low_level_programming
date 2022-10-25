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
	size_t num;
	const listint_t *temp;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != 0)
	{
		printf("%d\n", temp->n);
		num++;
		temp = temp->next;
	}

	return (num);
}

