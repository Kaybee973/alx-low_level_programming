#include "main.h"

/**
 * reverse_array - check main
 * @a: is a pointer pointing to the variable
 * @n: Is an integer
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;
	int swap;


	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = swap;
	}

}
