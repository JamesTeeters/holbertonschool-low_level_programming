#include "main.h"
/**
 * create_file - function that creates a file.
 *
 * @filename: name of file.
 * @text_content: contents of file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, out;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	len = strlen(text_content);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	out = write(fd, text_content, len);

	if (fd < 0 || out < 0)
		return (-1);

	close(fd);

	return (1);
}
