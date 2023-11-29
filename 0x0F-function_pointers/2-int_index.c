#include "function_pointers.h"
#include <stdio.h>
/**
  *int_index - return index place if comparison is true else (-1)
  *@array:array
  *@size:size of elements in array
  *@cmp:pointer to function
  *Return: 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (z = 0; z < size; z++)
	{
		if (cmp(array[z]))
			return (z);
	}
	return (-1);
}
