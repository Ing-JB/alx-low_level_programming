#include"main.h"
/**
 * more_numbers - prints a digit(0 thru 9) 10 times
 *
 * Return: 0 Always
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			int d;
			int r;

			d = (i / 10);
			r = (i % 10);
			if (d > 0)
			{
				_putchar(d + '0');
			}
			_putchar(r + '0');
		}

		_putchar(10);
	}
}
