#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: integer to extract the last digit
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;
	int b;

	if (n > 0)
	{
	a = n % 10;
	_putchar(a + '0');
	}

	else
	{
	n = -n;
	b = n % 10;
	_putchar(b + '0');

	}

	return (b);

}
