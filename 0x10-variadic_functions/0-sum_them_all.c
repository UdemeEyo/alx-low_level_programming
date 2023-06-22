#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all the parameters
 * @n: number of parameterss to be added
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int count;
	va_list args;

	count = 0;
	va_start(args, n);
	if (n == 0)
		return (0);
	while (count < n)
	{
		sum += va_arg(args, unsigned  int);
		count++;
	}
	va_end(args);
	return (sum);
}
