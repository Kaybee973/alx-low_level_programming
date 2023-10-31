#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: count the arguments supplied to the program
 * @argv: an array of pointers to the strings
 * Description: program that prints result of multiplication
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc > 2)
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	else
	printf("Error\n");
	return (0);
}
