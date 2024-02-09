#include "main.h"

/**
 * binary_to_uint - A finction that converts binary number
 * to unsigned integer
 * @b: A pointer to binary string
 * Return: unsigned integer converted
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, res = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			res += base;
		base *= 2;
		len--;
	}
	return (res);
}