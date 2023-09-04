#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: c - actual number of bytes read and printed
 * 0 filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t cd;
	ssize_t c;
	ssize_t d;

	cd = open(filename, O_RDONLY);
	if (cd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	d = read(cd, buf, letters);
	c = write(STDOUT_FILENO, buf, d);

	free(buf);
	close(cd);
	return (c);
}
