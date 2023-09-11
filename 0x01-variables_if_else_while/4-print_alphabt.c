#include <stdio.h>

/**
  *main - prints the last digit of the number stored in the variable n
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
