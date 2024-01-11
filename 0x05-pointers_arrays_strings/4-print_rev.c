#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * return: - 0
 */
void print_rev(char *s)
{
	int i = 0;
	int n = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	s--;

	while (n <= i)
	{
		_putchar(*s);
		s--;
		n++;
	}

	_putchar('\n');
}

