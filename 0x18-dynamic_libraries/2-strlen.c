#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int li = 0;

	while (*s != '\0')
	{
		li++;
		s++;
	}
	return (li);
}
