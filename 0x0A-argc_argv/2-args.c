#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguements it receives
 * @argc: arguements count
 * @argv: array of arguements
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int n = 0;

	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}

