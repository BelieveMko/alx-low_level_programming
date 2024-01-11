#include "main.h"

/**
  *_sqrt_recursion(int n) :- Calls function that calculates square root
  *@n :- number we want to find the square root
  *
  *Return:- square root
  */



int _sqrt_recursion(int n)

{

	return (calsquare(n, 1));

}

/**
  *calsquare(int n, int i) :- This function calculates the square root
  *@n :- number that we want to determine the sqaure root
  *@i :- iteration
  *
  *Return:-  square root number
  */

int calsquare(int n, int i)
{

	int x = i * i;

	if (x == n)
	{
		return (i);
	}

	else if (x != n)
	{

		if (i > n)
		{
			return (-1);
		}
		else
		{
			return (calsquare(n, i + 1));
		}
	}

	else
	{
	}

return (0);
}
