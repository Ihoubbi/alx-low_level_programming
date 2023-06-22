#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * positive_or_negative - determin if a number is positive, negative or zero.
 * @n: integer
 * Return: 0(Success)
 */

void positive_or_negative(int n)
{
if (n > 0)
	printf("%d is positive\n", n);
else if (n == 0)
	printf("%d is zero\n", n);
else if (n < 0)
	printf("%d is negative\n", n);
}
