#include "main.h"

#include <stdio.h>


/**
  *print_to_98 - prints all natural numbers
  *
  *@n: the number to start printing from
  *Description: 'prints the alphabet in lower case'
  *Return: 1 is greater than zero
  */
void print_to_98(int n)

{

	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
}
