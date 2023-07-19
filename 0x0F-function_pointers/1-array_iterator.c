#include "function_pointers.h"
#include <stdio.h>
/**
  *array_iterator - prints array element on a new line
  *@array:array
  *@size:how many element to print
  *@action:pointer to a function
  *Return: nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
