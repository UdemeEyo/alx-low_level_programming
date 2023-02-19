#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
*/
int main(void)
{
	char Lc;

	for (Lc = 'a'; Lc <= 'z'; Lc++)
	{
		putchar(Lc);
	}
	putchar('\n');
	return (0);
}
