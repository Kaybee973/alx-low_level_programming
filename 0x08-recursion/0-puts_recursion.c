#include "main.h"

/**
 * _puts_recursion - check main
 * Description:function that prints a string, followed by a new line.
 * @s: An input character
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
}
