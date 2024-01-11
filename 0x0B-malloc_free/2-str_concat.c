#include "main.h"
#include <stdlib.h>

/**
 * str_concat:- function that concatenates two strings.
 * @s1:- The string  are the contains chars of the new concatenated string
 * @s2:- The string to be concatenated to the first string
 *
 * Return:- The address of the first char of the new concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int i = 0;
	int newstr_index = 0;
	int len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	newstr = malloc(sizeof(char) * len);

	if (newstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		newstr[newstr_index++] = s1[i];
	}

	for (i = 0; s2[i]; i++)
	{
		newstr[newstr_index++] = s2[i];
	}
	return (newstr);
}
