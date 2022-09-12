#include<stdio.h>
/**
 * main - prints lowercase alphas less eq
 *
 * Return: lower case alphabets (success)
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		if (a != 101 && a != 113)
			putchar(a);
	}
	putchar(10);
	return (0);
}
