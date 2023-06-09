#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its name followed by a new line
 * @argc: arguements count
 * @argv: array of arguements
 * Return: Always 0 on success.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
