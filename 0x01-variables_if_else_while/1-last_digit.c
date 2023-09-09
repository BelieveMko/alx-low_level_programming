#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - prints the last digit of the number stored in the variable n
  *Return: - Returns 0
  */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m != 0 && m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, m);
	}
	return (0);
}
