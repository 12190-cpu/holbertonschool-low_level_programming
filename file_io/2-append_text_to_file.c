#include "main.h"

/**
 * append_text_to_file - ajoute du texte à la fin d’un fichier
 * @filename: nom du fichier
 * @text_content: texte à ajouter
 *
 * Return: 1 en cas de succès, -1 en cas d’échec
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
