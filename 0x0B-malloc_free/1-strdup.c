#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *cpystr;
	int i;
	int l = 0;
	int g;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[l] != '\0')
	{

		l++;
	}

	g = l + 1;

	cpystr = malloc(sizeof(*str) * g);

	if (cpystr == NULL)
	{
		return (NULL);

	}


	while (i < l)
	{
		cpystr[i] = str[i];
		i++;
	}

	i = i + 1;

	cpystr[i] = '\0';

return (cpystr);
}
