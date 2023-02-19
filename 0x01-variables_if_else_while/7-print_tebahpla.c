#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/
int main(void)
{
	char lr;

	for (lr = 'z'; lr >= 'a'; lr--)
		putchar(lr);

	putchar('\n');
	return (0);
}
