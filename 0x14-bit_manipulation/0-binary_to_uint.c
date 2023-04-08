#include "main.h"

/**
  * binary_to_uint - converts binary number to unsigned int
  * @b: string containing the binary number
  * Return: the converted number
  */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decim = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		decim = 2 * decim + (b[i] - '0');
	}
	return (decim);
}
