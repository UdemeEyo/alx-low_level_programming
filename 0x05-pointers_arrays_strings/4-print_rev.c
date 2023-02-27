#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by new line.
 * @s: string
 *Return: 0
 */
void print_rev(char *s)
{
	int la = 0;
	int m;

	while (*s != '\0')
	{
		la++;
		s++;
	}
	s--;
	for (m = la; m > 0; m--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
