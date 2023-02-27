#include "main.h"

/**
 * puts2 -  prints every other character of a string,
 * starting with the first character
 *@str: string to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int la = 0;
	int a = 0;
	char *u = str;
	int m;

	while (*u != '\0')
	{
		u++;
		la++;
	}
	a = la - 1;
	for (m = 0; m <= a; m++)
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
	}
		_putchar('\n');
}
