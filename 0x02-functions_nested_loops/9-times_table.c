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
		_putchar('0');
		for (j = 0; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			if ((i * j) > 9)
			{
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((i * j) + '0');
			}

		}
		_putchar('\n');
	}

}
