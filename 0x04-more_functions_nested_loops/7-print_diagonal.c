#include "main.h"
/**
  *print_diagonal - print the numbers diagonal
  *@n: input
  *Return: void
  */
void print_diagonal(int n)
{
	int y, z;

	if (n <= 0)
		_putchar('\n');
	for (y = 0; y < n; y++)
	{
		for (z = 0; z < y; z++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
