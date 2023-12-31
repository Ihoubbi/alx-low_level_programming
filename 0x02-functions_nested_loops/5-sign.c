#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int check
 * Return: 1 if n is greater than zero, -1 if n is less than zero,0 for n=0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
