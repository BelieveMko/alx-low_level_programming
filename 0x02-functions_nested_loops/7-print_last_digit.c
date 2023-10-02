#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number to print out the last digit
 *
 * Return: value of the last number
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	i *= -1;

	_putchar(i + '0');

	return (i);
}
