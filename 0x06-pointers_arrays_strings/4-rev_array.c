#include "main.h"
#include <stdio.h>

/**
*reverse_array- reverse array elements
*@a:pointer to array
*@n:number of array elements
*
* Return: Always 0
*/
void reverse_array(int *a, int n)
{
	int c;
	int t;

	for (c = 0; c < n / 2; c++)
	{
		t = a[c];
		a[c] = a[n - c - 1];
		a[n - c - 1] = t;
	}
}
