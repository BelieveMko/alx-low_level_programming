#include <stdio.h>

/**
  *main - prints numbers and base 16 letters
  *Return: - return 0
  */

int main(void)
{
	int x = 0;
	char i = 'a';
	char conv;

	while (x <= 9)
	{
	conv = '0' + x;
	putchar(conv);
	x++;
	}

	while (i <= 'f')
	{
	putchar(i);
	i++;
	}

	putchar(10);

return (0);
}
