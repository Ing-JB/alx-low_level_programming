#include"main.h"
#include <stdio.h>

/**
 *jack_bauer - prints every minute of a day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hh;
	int mm;

	for (hh = 0; hh < 24; hh++)
	{
		for (mm = 0; mm < 60; mm++)
		{
			_putchar((hh / 10) + '0');
			_putchar((hh % 10) + '0');
			_putchar(':');
			_putchar((mm / 10) + '0');
			_putchar((mm % 10) + '0');
			_putchar('\n');
		}
	}
}
