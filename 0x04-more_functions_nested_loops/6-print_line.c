#include "main.h"
/**
 * print_line - check main
 * @n: An input character
 * Description: unction that draws
 * a straight line in the terminal.
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
