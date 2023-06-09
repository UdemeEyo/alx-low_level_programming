#include <stdio.h>
#include <stdlib.h>

void isnegative(int);

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of command line parameters
 * @argv: pointer to parameter passed
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int count = 0, money;

	if (argc != 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	money = atoi(argv[1]);
	isnegative(money);
	do {
		if (money >= 25)
		{
			count += money / 25;
			money %= 25;
		}
		else if (money >= 10)
		{
			count += money / 10;
			money %= 10;
		}
		else if (money >= 5)
		{
			count += money / 5;
			money %= 5;
		}
		else if (money >= 2)
		{
			count += money / 2;
			money %= 2;
		}
		else
		{
			count += money / 1;
			money %= 1;
		}
	} while (money);
	{
		printf("%d\n", count);
		exit(EXIT_SUCCESS);
	}
}
/**
 * isnegative - checks if var is negative
 * @var: variable to be checked
 */
void isnegative(int var)
{
	if (var < 0)
	{
		printf("0\n");
		exit(EXIT_FAILURE);
	}
}
