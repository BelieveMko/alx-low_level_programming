#include "main.h"

/**
 * get_bit - A function that gets a bit at a specified index
 * @n: number to get bit from
 * @index: The index where the bit get at
 * Return: The value of the bit or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int converted = 1;

	converted = converted << index;
	if (converted == 0)
		return (-1);

	if ((n & converted))
		return (1);
	else
		return (0);
}
