#include "main.h"

/**
 * _isalpha - checks for uppercase and lowercase alphabets
 * @c: The character to be checked
 * Return: 1 if c is a letter, lowercase or uppercase otherwise return 0.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
