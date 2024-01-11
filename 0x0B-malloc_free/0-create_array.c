#include "main.h"
#include <stdlib.h>

/**
  * create_array:- create array of chars, and initialize  with specific char
  * @size:- size of the array to be created
  * @c:- specific char
  * Return:- pointer to the address of the array, return NULL if error occurs
  */

char *create_array(unsigned int size, char c)
{
	char *ad;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	ad = malloc(size * sizeof(char));

	if (ad == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		ad[i] = c;
		i++;
	}

return (ad);
}
