#include <stdio.h>

/**
 * main - prints file it was compiled from
 * Return: 0 0n success
 */
int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
