#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int la = 0;
	int m;
	char rev = s[0];

	while (s[la] != '\0')
	la++;
	for (m = 0; m < la; m++)
	{
		la--;
		rev = s[m];
		s[m] = s[la];
		s[la] = rev;
	}
}
