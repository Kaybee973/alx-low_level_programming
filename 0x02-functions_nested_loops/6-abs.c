#include "main.h"

/**
 * _abs - Check main
 * @r: As an input character
 * Description: function that computes the absolute
 * value of an integer
 * Return: Always 0.
 */
int _abs(int r)
{

	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
	return (0);
}
