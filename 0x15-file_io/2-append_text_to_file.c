#include "main.h"

/**
 * _strlen - finds the length of a string
 * @str: pointer to the string
 *
 * Return: length of the string
 */
size_t _strlen(char *str)
{
	size_t p;

	for (p = 0; str[p]; p++)
		;
	return (p);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fed;
	ssize_t lens;

	if (filename == NULL)
		return (-1);
	fed = open(filename, O_WRONLY | O_APPEND);
	if (fed == -1)
		return (-1);
	if (text_content != NULL)
		lens = write(fed, text_content, _strlen(text_content));
	close(fed);
	if (lens == -1)
		return (-1);
	return (1);
}
