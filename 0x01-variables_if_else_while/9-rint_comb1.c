#include<stdio.h>
/**
 * main - prints all combinations of (0 - 9)
 *
 * Return: retuns 0 (success)
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			putchar(a);
			putchar(b);
			putchar(44);
			putchar(32);
		}
	}
	return (0);
}
