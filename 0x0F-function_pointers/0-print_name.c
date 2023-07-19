#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name
 * @f: is a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
