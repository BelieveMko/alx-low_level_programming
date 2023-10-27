#include "main.h"

/**
  * main :- prints all arguments the program receives
  * @argc:- number of arguments
  * @argv:- array of arguments
  *
  * Return:- return 0
  */

int main(int argc, char *argv[])

{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

