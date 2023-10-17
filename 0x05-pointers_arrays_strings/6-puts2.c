#include "main.h"

/**
 * puts2 - check main
 * @str: An input string pointer
 * Description: function that prints every other character of a string, starting with the first character, followed by a new line.
 * Return: void
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	if (a % 2 == 0)
		_putchar(str[a]);
	_putchar('\n');
}
