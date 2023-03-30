#include <stdio.h>
#include "lists.h"

/**
  * print_list - prints all the elements of a linked list
  * @h: pointer to the list_t list to print
  *
  * Return: length of list
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr = NULL;

	ptr = h;

	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}
