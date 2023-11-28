#include "main.h"
/**
 * create_file -creates an array of chars, and initializes
 *
 * @text_content: is a NULL terminated string to write to the file
 * @filename: is the name of the file to create
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int k, p, lens = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lens = 0; text_content[lens];)
			lens++;
	}

	k = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	p = write(k, text_content, lens);

	if (k == -1 || p == -1)
		return (-1);

	close(k);

	return (1);
}
