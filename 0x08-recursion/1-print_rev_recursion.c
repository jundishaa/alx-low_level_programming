#include "main.h"
/**
  *_print_rev_recursion - prints a string in reverse
  *@s: the sstring to be printed
  *Return: 0 always sucess
  */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
