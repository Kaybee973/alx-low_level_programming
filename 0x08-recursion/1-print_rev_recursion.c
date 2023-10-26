#include "main.h"

/**
 * _print_rev_recursion - check main
 * Description: function that prints a string in reverse
 * @s: An input string character
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
