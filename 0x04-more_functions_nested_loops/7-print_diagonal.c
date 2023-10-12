#include "main.h"

/**
 * print_diagonal - check main
 * @n: Input character
 * Description: function that draws
 * a diagonal line on the terminal
 * Return: void
 */
void print_diagonal(int n)
{
	int a = 0, b;

	if (n > 0)
	{
		for (; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\
