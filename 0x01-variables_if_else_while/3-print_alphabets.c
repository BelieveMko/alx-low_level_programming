#include <stdio.h>

/**
  *main - prints the lowercase, and then in uppercase letters.
  *Return: - Returns 0
  */

int main(void)
{
	int x = 97;
	int X = 65;

	while (x <= 122)

	{
		putchar(x);
		x++;
	}

	while (X  <= 90)

	{
		putchar(X);
		X++;
	}

	putchar(10);

return (0);
}
