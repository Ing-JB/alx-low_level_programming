#include "main.h"
#include <stdio.h>
int  _strlen(char *s);
/**
*_strcmp - copies a strin into another
*@s1:pointer to 1st string
*@s2:pointer to 2nd string
*
* Return: 0 if equal, 15 if s1>s2 else -15
*/
int _strcmp(char *s1, char *s2)
{
	int c;
	int l1;
	int l2;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	c = 0;
	while (s1[c] == s2[c])
	{
		if (s1[c] == '\0' || s2[c] == '\0')
			break;
		c++;
	}

	if ((s1[c] != s2[c]) && (l1 > l2))
		return (15);
	else if ((s1[c] != s2[c]) && (l2 > l1))
		return (-15);
	else
		return (0);
}

/**
 *_strlen - find string length
 *@s: pointer to first char
 *
 *Return:length of string
 */
int  _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
