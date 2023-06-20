#include "main.h"
/**
  *print_last_digit - prints the last digit
  *letter Another cases, shows 0
  *
  *@n: the input number as an intiger
  *Description: 'prints the alphabet in lower case'
  *Return: 1 is greater than zero
  *
  */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
