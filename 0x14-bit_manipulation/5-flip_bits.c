#include "main.h"
/**
 * flip_bits - flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int a, b;

	b = 0;
	res = 1;
	diff = n ^ m;
	for (a = 0; a < (sizeof(unsigned long int) * 8); a++)
	{
		if (res == (diff & res))
			b++;
		res <<= 1;
	}

	return (b);
}
