#include"main.h"
/**
 * print_most_numbers - prints a digit(0 through 9 )except 2 and 4
 *
 * Return: 0 Always
 *
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 49 || i == 51)
		{
			continue;
		}
		else
			_putchar(i);
	}
		_putchar(10);
}
