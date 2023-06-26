#include "main.h"
/**
  *print_rev - print in reverse
  *@s: the string to be printed
  *Return: 0
  */
void print_rev(char *s)
{
	int j, k;

	k = 0;

	while (s[k] != '\0')
		k++;

	for (j = k - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
