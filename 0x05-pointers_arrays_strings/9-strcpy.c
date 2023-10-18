#include "main.h"

/**
 * _strcpy - check main
 * @dest: Destination to be copied to
 * @src: Source pointing to the elements f array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';

	return (dest);
}
