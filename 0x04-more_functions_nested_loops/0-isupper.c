#include"main.h"

/**
 * _isupper - test if letter is uppercase
 *@c: letter to test
 *
 * Return: 1 if upper case, 0 otherwise
 *
 */

int _isupper(int c)
{
	int i;

	for (i = 65; i < 91; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}

	return (0);
}
