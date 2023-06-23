#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - printed string
 * @separator: seperates
 * @n: no of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int count;
	va_list args;

	count = 0;
	va_start(args, n);
	while (count < n)
	{
		string = va_arg(args, char *);
		if (separator == NULL)
		{
			if (string == NULL)
				printf("(nil)");
			else
				printf("%s", string);
		}
		else
		{
			if (string == NULL)
			{
				printf("(nil)");
				if (count == (n - 1))
					break;
				printf("%s", separator);
			}

			{
				printf("%s", string);
				if (count == (n - 1))
					break;
				printf("%s", separator);
			}
		}
		count++;
	}
	printf("\n");
	va_end(args);
}
