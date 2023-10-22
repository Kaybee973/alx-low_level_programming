#include <stdio.h>

/**
 * string_toupper - check main
 * Description: function that changes all lowercase letters of a string to uppercase.
 * Return: lwr
 */

char *string_toupper(char *lwr)
{
	int ascii;
	int i;


	for (i = 0; lwr[i] != '\0'; i++)
	{
		if (lwr[i] >= 'a' && lwr[i] < 'z')
		{
			ascii = lwr[i] - 32;
			lwr[i] = ascii;
		}
	}
	
	return (lwr);
}
