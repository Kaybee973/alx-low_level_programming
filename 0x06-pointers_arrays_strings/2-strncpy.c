#include "main.h"

/**
 * _strncpy - check main
 * @dest: is a pointer to the destination string
 * @src:  is a pointer to the source string
 * @n: is the maximum number of characters to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
