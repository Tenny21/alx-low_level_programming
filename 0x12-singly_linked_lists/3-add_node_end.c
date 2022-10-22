#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds node at the end of a list
 * @head: pointer to head pointer
 * @str: string constant to be stored in node data
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	int len;
	char *dup;

	new_node = (list_t *)(malloc(sizeof(list_t)));
	if (new_node == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new_node->str = dup;
	new_node->len = len;
	new_node->next = 0;

	temp = *head;
	while (temp != 0)
	{
		temp = temp->next;
	}
	temp = new_node;

	return (new_node);
}

