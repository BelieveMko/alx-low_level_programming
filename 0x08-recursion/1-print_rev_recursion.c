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
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
