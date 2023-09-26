#include "main.h"
/**
 * puts2 - function should print only one character after another
 * starting with the first one
 * @str: input to the function
 * Return: print
 */
void puts2(char *str)
{
	while(*str != '\0')
	{
	_putchar(*str);
	
	str++;
	str++;
	}

	_putchar('\n');
}

