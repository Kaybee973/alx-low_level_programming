#include "main.h"

/**
 * print_number - check main
 * @n: Input character
 * Description:  function that prints an integer
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}
