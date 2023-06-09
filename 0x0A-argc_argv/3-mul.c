#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arrays
 * @argv: arrays
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ans = a * b;
	printf("%d\n", ans);
	return (0);
}
