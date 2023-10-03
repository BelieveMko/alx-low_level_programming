#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: - string to be partly replaced
 * @src: - source string
 * @n: - number of chars to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}

