#include<stdio.h>
/**
 * main - prints lowercase alphas
 *
 * Return: lower case alphabets (success)
 */
int main(void)
{
	int a;

	for (a = 97; a < 123; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
