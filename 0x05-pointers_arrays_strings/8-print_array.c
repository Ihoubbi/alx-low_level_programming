#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: arrey of integer
 * @n: number of element of the arrey to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
