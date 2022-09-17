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
		for (i = 48; i < 58; i++)
		{
			_putchar(i);
		}

		if (i >= 58)
		{
			int k;

			for (k = 0; k < 5; k++)
			{
				_putchar(49);
				_putchar(48 + k);
			}
		}
		_putchar(10);
	}
}
