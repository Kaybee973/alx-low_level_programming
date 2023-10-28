#include "main.h"

/**
 * _strlen - check main
 * @s: An input character pointer
 * Description: function that returns the length of a string.
 * Return: a
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}
