#include "lists.h"

/**
 * list_len - returns the num of elements in a list
 * @h: const pointer of user-defined type
 *
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	size_t num_of_elements = 0;
	const list_t *p = h;
	while (p)
	{
		num_of_elements++;
		p = p->next;
	}
	return (num_of_elements);
}

