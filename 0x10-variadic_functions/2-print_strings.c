#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_strings - prints strings followed by a new line
  * @separator: string to be printed between strings
  * @n: the number of strings passed to the func.
  * @...: a variable number of strings to be printed
  * description: if separator is NULL, donot print
  * if one of the strings is NULL, print (nil) instead
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
