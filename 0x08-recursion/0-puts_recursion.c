#include "main.h"

/**
  *_puts_recursion(char *s) :- This function prints a string recursively
  *@s :- a pointer to the first character of the string
  *
  *return :- void
  */


void _puts_recursion(char *s)

{
	if (*s == '\0')
	{
		return;
	}

	else

	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}

return;
}

