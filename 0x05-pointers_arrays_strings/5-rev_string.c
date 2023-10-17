#include "main.h"

/**
 * rev_string - check main
 * @s: An input string character
 * Description: function that reverses a string.
 * Return: void
 */

void rev_string(char *s)
{
	int a;
	int count = 0;
	char swap;

	for (a = 0; s[a] != '\0'; a++)
		count++;
	for (a = 0; a < count / 2; a++)
	{
		swap = s[a];
		s[a] = s[count - 1 - a];
		s[count - 1 - a] = swap;
	}
}
