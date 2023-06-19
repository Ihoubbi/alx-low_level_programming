#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits.
 *
 * Return: 0(Success)
 */

int main(void)
{
	int n, m, k;

	for (n = 48; n < 56; n++)
	{
		for (m = 49; m < 57; m++)
		{
			for (k = 50; k < 58; k++)
			{
				if (n < m && m < k)
				{
					putchar(n);
					putchar(m);
					putchar(k);
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
}
