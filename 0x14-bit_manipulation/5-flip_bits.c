/**
 * flip_bits - A function that gets number of bits needed to flip
 * @n: How many bit flips  to equal m for n
 * @m: The number to set other equal
 * Return: number of fliped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int fl = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int max = 0x01;

	while (max <= xor)
	{
		if (max & xor)
			fl++;
		max <<= 1;
	}
	return (fl);
}
