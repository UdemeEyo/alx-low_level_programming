#include <stdio.h>

/**
 * main - prints nummmber of arguements passed into it
 * @argc: arguement counts
 * @argv: array of arguements
 * Return: 0 on success
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
