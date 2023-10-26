#include "main.h"
/**
  * _pow_recursion - function that produces power of a number
  * @x: power of
  * @y: number
  * Return: power of a number
  */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
	return (x * _pow_recursion(x, (y - 1)));
	}

return (0);
}

