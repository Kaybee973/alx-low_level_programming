#include "main.h"

/**
 * print_sign - Check
 * @n: An input character
 * Description: Function that prints the sign of a number
 * Return: 1 and prints + if n is greater than zero
 */
int print_sign(int n)
{
	int result = 0;

	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else 
	{
		result = -1;
		_putchar('-');
	}
	return (result);
}
