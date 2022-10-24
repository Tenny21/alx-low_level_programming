#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of all the data of a list
 * @head: pointer
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != 0)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

