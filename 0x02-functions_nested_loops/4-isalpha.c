#include "main.h"

/**
 * _isalpha - Check main
 * @c: An input character
 * Description:functions return 1 if it is a letter
 * Return: 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	int l, u, p;

	p = 0;
	for (l = 'a'; l <= 'z'; l++)
	{
		for (u = 'A'; u <= 'Z'; u++)
		{
			if (c == l || c == u)
			{
				p = 1;
			}
		}
	}
	return (p);
}
