#include "main.h"
/**
 * _strncat - concatenate two strings but using n bytes or number ofchars
 * @dest: - destination string
 * @src: - source string
 * @n: - number of chars to take frrom source string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}

