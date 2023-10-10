#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 5;

	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
	       printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
