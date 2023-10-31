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
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
