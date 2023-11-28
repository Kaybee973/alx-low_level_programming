#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t k, j, p;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	k = open(filename, O_RDONLY);
	j = read(k, buff, letters);
	p = write(STDOUT_FILENO, buff, j);

	if (k == -1 || j == -1 || p == -1 || p != j)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(k);

	return (p);
}
