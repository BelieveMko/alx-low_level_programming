#include "main.h"

/**
 *int _sqrt_recursion(int n);
 *n :- number we want to find the square root
 *return :- return square root
 */



int _sqrt_recursion(int n)

{

	return (calsquare(n , 1));

}



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
			return ( calsquare(n, i + 1) );
		}
	}
	
	else
	{
	}

return (0);
}
