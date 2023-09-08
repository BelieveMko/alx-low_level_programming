#include <stdio.h>
/**
 *main - prints and that piece of art is useful" - Dora Korpar, 2015-10-19
 *Return: - returns 0
 */

int main(void)
{
	char *text = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int bytes_written = write(STDOUT_FILENO, text, strlen(text));

	return (0);

}
