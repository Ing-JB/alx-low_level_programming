#include<stdio.h>
/**
 * main - prints lowercase alphas in reverse
 *
 * Return: returns 0 always (success)
 */
int main(void)
{
	int a;

	for (a = 122; a > 96; a--)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
