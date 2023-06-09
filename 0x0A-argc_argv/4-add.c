#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds two positive numbers
 * @argc: arguements count
 * @argv: arrays
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
}

for (i = 1; i < argc; i++)
{
	char *number = argv[i];

	for (j = 0; number[j] != '\0'; j++)
	{
		if (!isdigit(number[j]))
		{
			printf("Error\n");
			return (1);
		}
	}
	result += atoi(number);
}
printf("%d\n", result);
return (0);
}
