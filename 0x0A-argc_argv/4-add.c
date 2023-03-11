#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array of string
 * Return: 0
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /*count string*/
	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - prints the name of the program
 * @argc: arguement count
 * @argv: arguemnts
 * Return: 0
 */
int main(int argc, char *argv[])
{
	/*Declaring variables*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;

	while (count < argc) /*goes thru the entire array*/
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /*ATOI -->converts string to in*/
			sum += str_to_int;
		}
		/*condition if one of the numbers contain symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum); /*print sum*/
	return (0);
}
