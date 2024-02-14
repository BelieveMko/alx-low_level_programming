#include "main.h"

/**
 * clear_bit -function that sets a bit to 0 at given index
 * @n: The number whose bit is to be set to 0
 * @index: The index to set bit at
 * Return: 1 if it worked, or -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int converted = 0x01;

	converted = ~(converted << index);
	if (converted == 0x00)
		return (-1);
	*n = *n & converted;
	return (1);
}
