#include<stdio.h>
/**
 * main - prints all combinations of (0 - 9)
 *
 * Return: retuns 0 (success)
 */
int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		putchar(44);
		putchar(32);
	}
	return (0);
}
