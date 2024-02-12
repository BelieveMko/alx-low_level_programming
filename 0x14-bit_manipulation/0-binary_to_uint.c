#include "main.h"

/**
 * binary_to_uint - A finction that converts binary number
 * to unsigned integer
 * @b: A pointer to binary string
 * Return: unsigned integer converted
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int n = 0;
	unsigned int a = 0;
	unsigned int c = 0;
	unsigned int res = 0;
	unsigned int bb;

	if (b == NULL)
		return (0);

	while (b[a] != '\0')
	{
		if (b[a] == '0' || b[a] == '1')
		{
			a++;
		}
		else
		{
			return (0);
		}
	}

	c = a - 1;

	while (a)
	{
		bb = b[n] - '0';
		res = res + (bb * (1 << c));
		n++;
		a--;
		c--;
	}
	return (res);
}
