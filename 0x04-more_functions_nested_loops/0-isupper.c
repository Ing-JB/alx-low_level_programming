#include"main.h"
/**
 * _isupper - check for uppercase character
 *@c: ascii code of character to test
 *
 * Return: 1 if c is uppercase, otherwis 0
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
