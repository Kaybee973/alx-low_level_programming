#include "main.h"
#include <stdio.h>

/**
 * print_array - check main
 * @a: An input integer
 * @n: An input integer
 * Description: function that prints n elements of an
 * array of integers, followed by a new line.
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
			printf(", ");
	}

	printf("\n");
}
