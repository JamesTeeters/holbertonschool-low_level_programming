#include "main.h"
/**
 * main - A function that copies one file to another.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 0(Always success).
 */
int  main(int argc, char *argv[])
{
	int file_from = 0, file_to = 0;
	int rd_check = 0, wr_check = 0;
	char buff[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	do {
		rd_check = read(file_from, buff, 1024);
		if (rd_check < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wr_check = write(file_to, buff, rd_check);
		if (wr_check < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (rd_check == 1024);

	if (close(file_from) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) < 0)
		dprintf(STDERR_FILENO, "Error: Can;t close fd %d\n", file_to), exit(100);

	return (0);
}
