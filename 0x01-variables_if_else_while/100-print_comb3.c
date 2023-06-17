#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 *
 * Return: 0(Success)
 */

int main(void)
{
	int n, m;

	for (n = 48; n < 57; n++)
	{
		for (m = 49; m < 58; m++)
		{
			putchar(n);
			putchar(m);
			if (n != 57 || m != 58)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
