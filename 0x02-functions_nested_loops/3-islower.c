#include"main.h"
/**
 * _islower - checks if character is lowercase
 * @c: the ascii number of character to test
 *
 * Return: 1 if successful, 0 if failure
 */
int _islower(int c)
{
	int j;

	for (j = 1; j <= 10; j++)
	{
		if (j == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}

	}
	_putchar(10);
	return (0);
}
