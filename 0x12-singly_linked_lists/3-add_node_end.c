#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end
 * @head: address of new node
 * @str: string
 *
 * Return: address of new element, NULL on failier
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *oldnode;
	char *node;

	node = strdup(str);
	if (str == NULL || node == NULL)
		return (NULL);

	newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->str = node;
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (*head);
	}
	oldnode = *head;

	while (oldnode->next != NULL)
		oldnode = oldnode->next;
	oldnode->next = newnode;
	return (*head);
}
