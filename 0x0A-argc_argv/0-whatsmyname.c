#include <stdio.h>

/**
 * main - Entry point
 * @argc: counts the number of arguments
 * @argv: an array of pointer to the string
 * Description: Program that prints its name, with new line
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
