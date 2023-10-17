#include "main.h"

/**
 * puts_half - check main
 * @str: An input character
 * Description: function that prints half of a string, followed by a new line.
 * Return: void
 */

void puts_half(char *str)
{
	int a, n;
	int count = 0;

	for (a = 0; str[a] != '\0'; a++)
		count++;
	n = (count - 1) / 2;
	for (a = n + 1; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
