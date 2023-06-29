#include "main.h"
/**
  *reverse_array - concatinate two strings
  *@a:input value
  *@n: input value
  *Return: dest
  */
void reverse_array(int *a, int n)
{
	int y;
	int z;

	for (y = 0; y < n--; y++)
	{
		z = a[y];
		a[y] = a[n];
		a[n] = z;
	}
}
