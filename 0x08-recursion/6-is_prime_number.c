#include "main.h"

/**
 * is_prime_number:- calls the function primenumbercalculator
 * @n: number to determine if its prime or not
 *
 * Return:- value which shows if its prime or not
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

return (primenumbercalculator(n, n - 1));
}

/**
 * primenumbercalculator :- determines if a number is prime or not
 * @n: number to determine
 * @a: iterates
 *
 * Return:- 1 if n is prime and 0 if not
 */

int primenumbercalculator(int n, int a)
{
	if (a == 1)
	{
		return (1);
	}

	if (a > 0 && n % a == 0)
	{
		return (0);
	}

return (primenumbercalculator(n, a - 1));
}

