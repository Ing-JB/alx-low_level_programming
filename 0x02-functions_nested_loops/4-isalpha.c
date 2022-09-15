#include"main.h"
/**
 * _isalpha - print lower/upper case alphas
 *@c: ascii code of character to test
 *
 * Return: 1 if it matches, otherwis 0
 *
 */
int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 123; i++)
	{
		if (i == c)
		{
			if ((i > 90) || (i < 97))
				continue;
			else
				return (1);
		}
		else
			continue;
	}
	return (0);
}
