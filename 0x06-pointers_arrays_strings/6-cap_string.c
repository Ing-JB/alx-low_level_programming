#include "main.h"
#include <stdio.h>

/**
*cap_string -Capitalizes every first word
*@s:pointer to string
*
* Return:pointer to capitalized string
*/
char *cap_string(char *s)
{
	int i;
	char Sep[13] = {' ', '\t', '\n', ',', ';', '.',
			'!', '?', '"', '(', ')', '{', '}'};

	i = 0;
	while (s[i] != '\0')
	{
		int j;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == Sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] = s[i + 1] - 32;
				}
			}
		}
		i++;
	}
	return (s);
}
