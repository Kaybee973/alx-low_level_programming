#include "main.h"

/**
 * _puts - check main
 * @str: An input string character
 * Description: function that prints a string, followed by a new line
 * Return: void
 */

void _puts(char *str)
{
	char new_str[];

	str = &new_str;
	_putchar(*str);
	_putchar('\n');
}
