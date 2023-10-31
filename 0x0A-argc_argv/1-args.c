#include <stdio.h>

/**
 * main - Entry point
 * @argc: counts number of arguments
 * @argv: the pointer to the array of string
 * Description: programs that prints number of arguments passed into it
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argv[0])
		return (0);
	printf("%d\n", argc);

	return (0);
}
