#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node at the beginning of a list
 * @head: pointer to head pointer
 * @str: string to be stored in the node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (*head == NULL)
		*head = new_node;
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	free(new_node->str);
	free(new_node);
	return (new_node);
}
