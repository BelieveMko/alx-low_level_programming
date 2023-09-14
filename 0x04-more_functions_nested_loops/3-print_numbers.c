/**
 * print_numbers - 0-9
 * return: -  void
 */

void print_numbers(void)
{
	int c = 0;
	char x;

	while (c < 9)
	{
		x = c + '0';
		_putchar(x);
		c++;
	}
_putchar(10);
}
