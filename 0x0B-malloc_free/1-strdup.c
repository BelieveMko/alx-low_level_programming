#include "main.h"
#include <stdlib.h>

/**
 * _strdup:- returns pointer to to new allocated space in memory
 * @str: string to be copied.
 *
 * Return:- pointer to the duplicated string or NULL if malloc fails.
 */

char *_strdup(char *str)
{
	char *cpystr;
	int i = 0;
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

	cpystr = malloc(sizeof(char) * g);

	if (cpystr == NULL)
	{
		return (NULL);

	}


	while (i < l)
	{
		cpystr[i] = str[i];
		i++;
	}


	cpystr[i] = '\0';

return (cpystr);
}
