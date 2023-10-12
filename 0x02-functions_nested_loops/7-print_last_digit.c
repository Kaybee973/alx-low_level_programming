#include "main.h"

/**
 * print_last_digit - check main
 * @a: An input character
 * Description: functions that prints the
 * last digit of a number
 * Return: the value of last digit
 */
int print_last_digit(int a)
{
	int n;

	if (a < 0)
	{
		a = -a;
		n = a % 10;
	}
	if (n < 0)
	{
		n = -n;
		_putchar(n + '0');
	}
	return (n);
}
