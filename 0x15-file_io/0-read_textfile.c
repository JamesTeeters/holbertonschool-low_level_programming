#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: name of file.
 * @letters: number of letters to be read.
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, data, out;
	char *buff = malloc(sizeof(char) * letters);

	if (buff == NULL || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	data = read(fd, buff, letters);
	out = write(STDOUT_FILENO, buff, data);

	if (fd < 0 || data < 0 || out < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);

	return (out);
}
