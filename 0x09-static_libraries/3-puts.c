#include "main.h"

/**
 * _puts - check main
 * @str: An input string character
 * Description: function that prints a string, followed by a new line
 * Return: void
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
