#include <stdio.h>

/**
  *main - prints all possible combinations of single-digit numbers
  *Return: - return 0
 */

int main(void)

{
	char i = 0;
	
	while (i <= 9)
	{
	putchar('0' + i);

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
