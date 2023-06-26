#include "main.h"
#include <stdio.h>
/**
  *print_array - print in reverse
  *@a: array
  *@n: number
  *Return: 0
  */
void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%d", a[z]);
		if (z != n - 1)
			printf(", ");
	}
	printf("\n");
}
