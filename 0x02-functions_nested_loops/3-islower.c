#include "main.h"

/**
 * _islower - Check main
 * @c: Input character
 * Description: uses _putchar function to print
 * checking alphabet in lowercase
 * Return: 1 if is lowercase or 0 if it is uppercase
 */
int _islower(int c)
{
	char a;
	int b;

	b = 0;
	for (a = 'a'; a <= 'z'; a++)
	{
		if( a == c)
		{
			b = 1;
		}
	}
	return (b);
}
