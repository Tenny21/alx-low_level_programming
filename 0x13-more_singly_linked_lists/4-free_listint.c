#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: head pointer
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != 0)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

