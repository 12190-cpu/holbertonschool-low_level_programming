#include "main.h"

/**
 * create_file - create a file and write inside it
 * @filename: name of the file
 * @text_content: text to write
 *
 * Return: 1 if success or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		n_written = write(fd, text_content, len);
		if (n_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
