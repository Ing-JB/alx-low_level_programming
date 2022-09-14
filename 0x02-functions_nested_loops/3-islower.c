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

	for (j = 97; j < 113; j++)
	{
		if (j == c)
		{
			return (1);
		}

	}
	_putchar(10);
	return (0);
}
