#include "main.h"

/**
 * print_alphabet_x10 - lowercase, 10 times alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\');
	}
