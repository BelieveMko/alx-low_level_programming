#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	int p = 0;
	int m = n - 1;

	while (p <= m)
	{
	if (p == m)
	{
	printf("%d", *a);
	}

	else
	{
	printf("%d, ", *a);
	}

	p++;
	a++;
	}
printf("\n");
}
