#include"main.h"
/**
 * print_triangle - print triangle followerd by newline
 *@size: size of triangle
 *
 * Return: triangle of . and # if size >0, else \n
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{

			for (j = 0; j < (size - i - 1); j++)
			{
				_putchar(46);
			}

			for (k = 0; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
