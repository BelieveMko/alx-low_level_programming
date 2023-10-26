#include <stdio.h>

void print_array(int *a, int n)

{
int b = 0;
int d = n - 1;

while (b <= d)
	
	{

	if (b == d)
	{
	printf("%d", *a);
	}

	else
	{	
	printf("%d, ", *a);
	}

	a++;
	b++;

	}
}
