#include "main.h"

/**
 * _strncat - check main
 * @dest: A pointer to the destination string
 * @src: A pointer to the source string
 * @n: The maximum number of characters to concatenate from the source string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		length++;
	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[length + i] = *src;
		src++;
	}
	dest[length + i] = '\0';

	return (dest);
}
