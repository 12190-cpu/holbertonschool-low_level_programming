#include "main.h"

/**
 * read_textfile - reads a text file and prints it in stdout
 * @filename: name of the file
 * @letters: number of letters to print
 *
 * Return: number of letters to print or
 *         0 if there is an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);

	free(buffer);
	close(fd);

	if (n_written == -1 || n_written != n_read)
		return (0);

	return (n_written);
}
