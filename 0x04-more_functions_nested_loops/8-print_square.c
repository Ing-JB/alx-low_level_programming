#include"main.h"

/**
 * print_square- draws a squares of#
 *@size: size of square
 *
 * Return: 0 Always
 */
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
