#include "main.h"
/**
 * _power - calculate (base and power)
 * @base: base of the exponet
 * @pow: power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int fig = 1;
	unsigned int i;

	for (i = 1; i <= pow; i++)
		fig *= base;
	return (fig);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, ans;
	char flag = 0;

	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		ans = n & dev;
		if (ans == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
