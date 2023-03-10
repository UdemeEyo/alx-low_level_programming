#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguements passed to the program
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: 0
 */
int main(int argc, char *argv[])
{
(void) argv; /*igore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
