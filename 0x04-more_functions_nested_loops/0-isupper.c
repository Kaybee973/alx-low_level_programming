#include "main.h"

/**
 * _isupper - check main
 * @c: An input character
 * Description: function that checks for uppercase character.
 * Return: Returns 1 if c is uppercase, otherwise return 0
 */
int _isupper(int c)
{
	char upper;
	int result;

	result = 0;
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (upper == c)
		{
			result = 1;
		}
	}
	return (result);
}
