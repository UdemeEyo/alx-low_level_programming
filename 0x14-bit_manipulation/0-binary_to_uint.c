#include "main.h"
#include <string.h>
#include <math.h>
#include <stddef.h>

/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: pointer to string
 * Return: the converted number, or 0 if more chars are not 0 or 1.
 * else NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i, base = 1, len = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		if (b[i] == '1')
			res += base;
		base *= 2;
	}
	return (res);
}

