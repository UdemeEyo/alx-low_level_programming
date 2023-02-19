#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char ex;

	for (ex = 'a'; ex <= 'z'; ex++)
	{
		if (ex != 'e' && ex != 'q')
			putchar(ex);
	}
	putchar('\n');
	return (0);
}
