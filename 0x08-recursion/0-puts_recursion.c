#include "main.h"

/**
 * _puts_recursion - check main
 * Description:function that prints a string, followed by a new line.
 * @s: An input character
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
