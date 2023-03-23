#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all its params
  * @n: the number of params passed to the func
  * @...: A variable number of params to calculate their sum
  * Return: if n == 0, return 0.
  * Otherwise the sum of all params
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
