#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int textlen = 0;
	int error;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	while (text_content[textlen])
	{
		textlen++;
	}

	error = write(fd, text_content, textlen);

	if (error == -1)
		return (-1);

	close(fd);

	return (1);
}
