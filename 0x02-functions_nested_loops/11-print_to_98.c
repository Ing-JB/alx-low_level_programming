#include"main.h"
#include <stdio.h>

/**
 *print_to_98 - print integers to 98
 *@n: first integer
 *
 * Return: prints integers
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i < 98)
		{
			printf("%d, ", i);
		}
		else
			printf("%d", i);
	}
	printf("\n");
}
