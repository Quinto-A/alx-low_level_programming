#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads atext file and prints it to the posix standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letter it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);

}
