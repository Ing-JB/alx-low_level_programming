#include<stdio.h>
/**
 * main - prints lowercase alphas
 *
 * Return- always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 97; a < 58; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
