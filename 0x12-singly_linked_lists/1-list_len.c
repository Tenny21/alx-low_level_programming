#include "lists.h"

/**
 * list_len - returns the num of elements in a list
 * @h: const pointer of user-defined type
 *
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	size_t num_of_elements = 2;
	const list_t *p;

	p = h->next;
	while (p != NULL)
	{
		num_of_elements++;
		p = p->next;
	}
	return (num_of_elements);
}

