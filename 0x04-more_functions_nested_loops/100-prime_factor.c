#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	unsigned long int a = 3, b = 612852475143;

	for (; a < 12057; a += 2)
	{
		while (b % a == 0 && b != a)
			b /= a;
	}
	printf("%lu\n", b);
	return (0);
}
