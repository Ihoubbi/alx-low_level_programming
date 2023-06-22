#include "main.h"

/**
 * _isupper - check for lowerse char
 * @c: the cher to be checkrd
 * Return: 1 for uppercase or 0 for anything else
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
