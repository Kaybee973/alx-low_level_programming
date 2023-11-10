#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings, followed by new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list ptr;

	va_start(ptr, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);

		if (str == NULL)
			str = "nil";
		printf("%s", str);
		if (i < (n - 1))
			printf("%s", separator);
	}
	va_end(ptr);

	printf("\n");
}
