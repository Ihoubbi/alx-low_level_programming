#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer. 
 * @array: 
 * @size: number of elements in the array
 * @cmp:  is a pointer to the function to be used to compare values
 * 
 * Returne: function does not return 0 If no element matches, return -1 
 * If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(*(array + x)))
			return (x);
	}
	return (-1);
}
