#include"main.h"
/**
 * print_sign - print the sign of an integer
 *@n: integer to print sign for
 *
 * Return: 1 and print + if n > 0,
 * 0 and print 0 if n is 0,
 * -1 if n is less than 0
 *
 */
int print_sign(int i)
{

	if (i > 0)
	{
		_putchar(43);
		_putchar(44);
		_putchar(32);
		_putchar(49);
		return (1);
	}
	else if (i == 0)
	{
		_putchar(48);
		_putchar(44);
		_putchar(32);
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		_putchar(44);
		_putchar(32);
		_putchar(47);
		return (-1);
	}
}
