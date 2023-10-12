#include "main.h"
/**
 * _isdigit - check main
 * @c: An input character
 * Description: function that checks for a
 * digit (0 through 9)
 * Return: Returns 1 if c is a digit, otherwise 0
 */
int _isdigit(int c)
{
	char a;
	int result;

	a = 0;
	result = 0;
	for (a = '0'; a <= '9'; a++)
	{
		if (a == c)
		{
		result = 1;
		}
	}
return (result);
}
