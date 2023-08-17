#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a list
 * @head: first node
 * @n: data
 * Return: address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}
	(*head)->prev = ptr;
	*head = ptr;

	return (*head);
}
