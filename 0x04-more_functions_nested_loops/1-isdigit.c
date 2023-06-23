#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: the char to be checked
 * Return: 1 for digit char or 0 for anything else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
