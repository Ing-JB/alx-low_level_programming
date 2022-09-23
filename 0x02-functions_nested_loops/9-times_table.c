#include"main.h"
#include <stdio.h>

/**
 *times_table - prints the 9 times table
 *
 * Return: Always 0
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if ((i * j) >= 10)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
				if ((j < 9) && ((i * j) >= 10))
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((i * j) + '0');
				if ((j < 9) && ((i * j) < 10))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}

}
