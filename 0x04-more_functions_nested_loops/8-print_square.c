#include "main.h"
/**
  *print_square - print the number
  *@size: size of the square
  *Return: void
  */
void print_square(int size)
{
	int l, m;

	if (size <= 0)
		_putchar('\n');

	for (l = 0; l < size; l++)
	{
		for (m = 0; m < (size); m++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

