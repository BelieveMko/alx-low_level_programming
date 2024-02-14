#include "main.h"

/**
 * set_bit - A function that sets a bit at a specified index to 1
 * @n: The number whose bit is to be changed
 * @index: The index to set bit of 1  at
 * Return: 1 if it worked, or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int converted = 0x01;

	converted = converted << index;
	if (converted == 0)
		return (-1);

	*n = *n | converted;
	return (1);
}
