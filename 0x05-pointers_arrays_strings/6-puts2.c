#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: variable
 * Return: printout the chars
 */
void puts2(char *str)
{
	int i = 0;
	int m = 0;
	char *y = str;
	int x;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	m = i - 1;
	for (x = 0 ; x <= m ; x++)
	{
		if (x % 2 == 0)
	{
		_putchar(str[x]);
	}
	}
	_putchar(10);
}

