#include "main.h"

/**
 * swap_int - check main
 * @a: An input pointer
 * @b: An input pointer
 * Description: function that swaps the values of two integers.
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
