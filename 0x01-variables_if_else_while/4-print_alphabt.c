#include <stdio.h>

/**
  *main - prints the letters in lowercase except for e and q
  *Return: - Returns 0
  */

int main(void)

{
	int x = 97;

	while (x <= 122)

	{
		if (x == 101 || x == 113)
		{
			x++;
		}

		else
		{
			putchar(x);
			x++;
		}

	}

	putchar(10);

return (0);
}
