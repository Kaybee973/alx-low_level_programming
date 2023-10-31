#include <stdio.h>

/**
 * main - Entry point
 * @argc: count the arguments supplied to the program
 * @argv: an array of pointers to the strings
 * Description: program that prints all arguments it receives
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return(0);
}
