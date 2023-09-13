#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the letters ,  in lowercase
 *and a new line
 */
void print_alphabet_x10(void)
{
	char mych;
	int i;

	i = 0;


	while (i < 10)
	{
		mych = 'a';
		while (mych <= 'z')
		{
			_putchar(mych);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
