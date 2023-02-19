#include <stdio.h>

/**
 * main - prints alphabet in lowercase and uppercase, follwed by a new line.
 * Return: Always 0 (Success)
*/
int main(void)
{
	char Lc;

	for (Lc = 'a'; Lc <= 'z'; Lc++)
	{
		putchar(Lc);
	}
	for (Lc = 'A'; Lc <= 'Z'; Lc++)
	{
		putchar(Lc);
	}
	putchar('\n');
	return (0);
}
