#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: pointer to head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *h;

	h = *head;
	while (h->next != NULL)
	{
		temp = h;
		h = h->next;
		free(temp);
	}
	*head = NULL;
}

