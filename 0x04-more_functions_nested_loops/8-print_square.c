#include"main.h"

/**
 * print_square- draws a squares of#
 *@n: size of square
 *
 * Return: 0 Always
 */
void print_square(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
