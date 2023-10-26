#include "main.h"
#include <stdio.h>

void jack_bauer(void)

{
int a,b,c,d;

	a = 0;

	while (a <= 2)
	{
	 	b = 0;

		while (b <= 9)
		{
			c = 0;	

			while (c <= 5)

			{
				d = 0;
				while (d <= 9)
				
				{
					 _putchar(a + 48);
					 _putchar(b + 48);
					 _putchar(':');
					 _putchar(c + 48);
					 _putchar(d + 48);
					 _putchar(10);	


				if (a ==2 && b == 3 && c == 5 && d == 9)
				{
					a = 3;
					d =10;
					c = 6;
					b = 10;
				}


				d++;

				}
				
				c++;
			}
	
		b++;
		}

	a++;
	}
}
