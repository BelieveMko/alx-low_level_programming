#include <stdio.h>

/**
  *main - prints all lower case in reverse
  *Return: - return 0
  */

int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
	putchar(i);
	i--;
	}

	putchar(10);

return (0);
}
