#include"main.h"
/**
 * print_line - prints a line
 * @n: number of dashes
 *
 * Return: 0 Always
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar(45);
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
