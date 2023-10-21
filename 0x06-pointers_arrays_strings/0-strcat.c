#include "main.h"

/**
 * _strcat - check main
 * @dest: The pointer pointing to the destination
 * @src: The pointer pointing to the source
 * Description: Function that concatenates two strings
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		i++;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
