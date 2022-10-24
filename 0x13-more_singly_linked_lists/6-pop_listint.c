#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * and returns the head node’s data (n).
 * @head: pointer to head pointer
 *
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int nd;
	listint_t *temp = *head;

	if (temp == 0)
		return (0);

	nd = temp->n;
	*head = temp->next;
	free(temp);

	return (nd);
}

