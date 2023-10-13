#include "main.h"

/**
 * positive_or_negative - check main
 * @i: An input character
 * Description: function that prints negative
 * or negative integers
 * Return: void
 */
void positive_or_negative(int i)
{
	i = 0;
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
