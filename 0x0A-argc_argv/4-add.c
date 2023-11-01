#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: count the numbers supplied to the program
 * @argv: an array of pointer to the strings
 * Description: programs that adds positive numbers.
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
