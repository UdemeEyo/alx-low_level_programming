#include "lists.h"
#include <stdlib.h>

/**
 * add_node - adds a new node
 * @head: pointer to new address of new node
 * @str: string
 *
 * Return: address of new element, NULL on fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

newnode = malloc(sizeof(*newnode));
	if (newnode == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		newnode = *head;
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = NULL;
		return (newnode);
	}

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
