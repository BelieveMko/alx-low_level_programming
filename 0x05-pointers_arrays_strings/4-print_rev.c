#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * return: - 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	while (i > 0)
	{
		_putchar(*s);
		s--;
		i--;
	}

	_putchar('\n');
}

