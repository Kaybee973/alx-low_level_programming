#include "main.h"

/**
 * cap_string - check main
 * Description: function that capitalizes all words of a string.
 * @cap: pointing to the string
 *
 * Return: cap
 */
char *cap_string(char *cap)
{
	int i, j;

	char spe[13] = {' ', '\t', '\n', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; cap[i] != '\0'; i++)
	{
		if (i == 0 && cap[i] >= 'a' && cap[i] <= 'z')
			cap[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (cap[i] == spe[j])
			{
				if (cap[i + 1] >= 'a' && cap[i + 1] <= 'z')
				{
					cap[i + 1] -= 32;
				}
			}
		}
	}

	return (cap);
}
