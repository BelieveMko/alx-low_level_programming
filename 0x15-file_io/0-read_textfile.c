#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters on standard output
 * @filename: text file to read from
 * @letters: maximum  numbers of letters to be read form the text file.
 *
 * Return: numbers of letters printed, if it fails, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t actual_bytes_read, actual_bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	actual_bytes_read = read(fd, buffer, letters);
	actual_bytes_written = write(STDOUT_FILENO, buffer, actual_bytes_read);

	close(fd);

	free(buffer);

	return (actual_bytes_written);
}
