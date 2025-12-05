#include "main.h"

/**
 * append_text_to_file - adds text at the end of a file
 * @filename: name of the file
 * @text_content: text to add
 *
 * Return: 1 if success or -1 if fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;
	int len = 0;

	fd = open(filename, O_WRONLY | O_APPEND);
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
