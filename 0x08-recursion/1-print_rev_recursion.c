#include "main.h"

/**
  *_print_rev_recursion(char *s) :- this function prints a string recursively
  *@s : - a pointer to the first character of the string
  *
  *return : - void
  */

void _print_rev_recursion(char *s)

{
	if (*s != '\0')

	{

		if (*(s + 1) == '\0')
		{

			return;
		}

		else

		{

		s++;
		_print_rev_recursion(s);

		}

	}

	else

	{

	}

_putchar(*s);

return;
}
