#include "main.h"
/**
  *_pow_recursion - prints power
  *@x:value to raise
  *@y:power
  *Return: 0 always sucess
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
