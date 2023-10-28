#include "main.h"

/**
 * _strcmp - check main
 * @s1: The first string
 * @s2: The second string
 * Description: function that compares two strings
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s2[i] < s1[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
