#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main -This checks if the number entered is negative or not
  *
  *Return: - Return 0
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		{
		printf("%d is positive\n", n);
		}
	else if (n == 0)
		{
		printf("%d is zero\n", n);
		}
	else if (n < 0)
		{
		printf("%d is negative\n", n);
		}
	else
		{
		printf("Enter valid number\n");
		}
	return (0);
}
