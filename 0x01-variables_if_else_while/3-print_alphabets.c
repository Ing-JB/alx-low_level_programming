#include<stdio.h>
/**
 * main - prints lowercase alphas
 *
 * Return: returns 0 (success)
 */
int main(void)
{
	int a, j;

	for (a = 97; a < 123; a++)
	{
		putchar(a);
	}
	for (j = 65; j < 91; j++)
	{
		putchar(j);
	}
	putchar(10);
	return (0);
}
