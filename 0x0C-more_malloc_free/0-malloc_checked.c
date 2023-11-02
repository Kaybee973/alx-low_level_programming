#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory.
 * @b: size of bytes
 *
 * Return: void pointer
 * if malloc fails, status value is equal to 98.
 */
void *malloc_checked(unsigned int b)
{
	char *void_p;

	void_p = malloc(b);
	if (p == NULL)
		exit(98);
	return (void_p);
}
