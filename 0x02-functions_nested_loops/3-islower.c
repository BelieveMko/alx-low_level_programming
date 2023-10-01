#include "main.h"
#include <stdio.h>
/**
 * _islower - check if char is lowercase
 *@c: - variable holds char value
 * Return: 1 if char is lowercase, otherwise retrns 0.
 */
int _islower(int c)
{
	
	if (c <= 90)
	{
		return (0);
	}
	else if (c >= 97)
	{
		return (1);
	}
	else
	{
	}
	return (0);
}
