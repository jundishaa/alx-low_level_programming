#include "main.h"
/**
  *_strlen_recursion - returns the length of string
  *@s: the string to be measured
  *Return: 0 always sucess
  */
int _strlen_recursion(char *s)
{
	int num = 0;

	if (*s)
	{
		num++;
		num += _strlen_recursion(s + 1);
	}
	return (num);
}
