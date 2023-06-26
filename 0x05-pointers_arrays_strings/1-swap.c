#include "main.h"
/**
  *swap_int - swaps the value of int
  *@a:first integer
  *@b:second integer
  *Return: 0
  */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
