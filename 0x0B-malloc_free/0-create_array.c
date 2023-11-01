#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: the length of the array
 * @c: input character
 * Return: void pointer
 */

char *create_array(unsigned int size, char c)
{
	char *void_pointer;
	unsigned int i;

	if (size == 0)
		return (NULL);

	void_pointer = (char *) malloc(sizeof(char) * size);
	if (void_pointer == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		void_pointer[i] = c;

	return (void_pointer);
}
