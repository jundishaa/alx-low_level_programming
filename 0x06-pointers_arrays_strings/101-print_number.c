#include "main.h"
/**
  *print_number - concatinate two strings
  *@n: entiger
  *Return:0
  */
void print_number(int n)
{
	unsigned int j1;

	j1 = n;

	if (n < 0)
	{
		_putchar('-');
		j1 = -n;
	}
	if (j1 / 10 != 0)
	{
		print_number(j1 / 10);
	}
	_putchar((j1 % 10) + '0');
}
