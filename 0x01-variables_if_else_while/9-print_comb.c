#include <stdio.h>

/**
  *main - prints all possible combinations of single-digit numbers
  *Return: - return 0
 */

int main(void)

{
	char i = 0;
	char conv;

	while (i <= 9)
	{

	conv = '0' + i;
	putchar(conv);

	if (i < 9)
	{
		putchar(',');
		putchar(32);
	}

	else
	{

	}

		i++;
	}

	putchar(10);
return (0);
}
