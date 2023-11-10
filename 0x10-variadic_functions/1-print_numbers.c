#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: string
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int par;

	va_list ptr;

	va_start(ptr, n);
	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		par = va_arg(ptr, int);
		printf("%d", par);
		if (i < (n - 1))
			printf("%s", separator);

	}
	va_end(ptr);
	printf("\n");
}
