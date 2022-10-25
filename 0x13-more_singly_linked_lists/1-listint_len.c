#include "lists.h"
#include <stddef.h>

/**
 * listint_len - numof elements
 * @h: head pointer
 *
 * Return: the num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

