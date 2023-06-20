#include "main.h"
/**
  *print_alphabet_x10 - make the alphabet
  *Description: 'prints the alphabet in lower case'
  *Return: void
  */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
