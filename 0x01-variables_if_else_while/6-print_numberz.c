#include <stdio.h>

/**
  *main - prints all base 10 numbers using putchar
  *Return: - Return 0
  */

int main(void)
{
	int i = 0;
	char conv;

	while (i <= 9)

	{
	conv = '0' + i;
	putchar(conv);
	i++;
	}

	putchar(10);

return (0);
}
