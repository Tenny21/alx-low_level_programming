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
	size_t num;
	const listint_t *temp;

	temp = h;
	while (temp != 0)
	{
		num++;
		temp = temp->next;
	}

	return (num);
}

