#include "main.h"

/**
  * main - multiply arguments supplied to the command line
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: return 0
  */



int main(int argc, char *argv[])

{
	int mul;
	int a;
	int b;

	if (argc < 3)

	{
		printf("Error");

	}

	else

	{
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);

	mul = a * b;

	printf("%d", mul);

	}

return (0);
}

/**
  * _atoi  :- changes a char to an int
  * @s     :- pointer to first char
  *
  * Return:- integer value after conversion
  */


int _atoi(char *s)

{


	int i = 0;
	int d = 0;
	int p = 0;
	int c = 1;
	int ch;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	while (*s != '\0')

	{
		i++;
		s++;
	}

	s--;

	while (d < i)
	{

		ch = *s - '0';

		p = p + ch * c;
		c = c * 10;
		s--;
		d++;

	}

return (p * sign);
}
