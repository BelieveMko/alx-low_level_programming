#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string variable
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;
	s = &str[0];

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
