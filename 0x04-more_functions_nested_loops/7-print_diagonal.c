#include"main.h"

/**
 * print_diagonal - draws a diagonal line
 *@n: number spaces from left
 *
 * Return: 0 Always
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
				_putchar(32);
				_putchar(92);
				_putchar(10);
		}
	}
	else
	{
		_putchar('\n');
	}
}
