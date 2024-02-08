#include "main.h"
/**
 * print_binary - This code prints a binary representation of a numbers
 * @n:The number that is intended to print in binary
 */
void print_binary(unsigned long int n)
{
	int y, iterate = 0;
	unsigned long int present;

	for (y = 63; y >= 0; y--)
	{
		present = n >> y;

		if (present & 1)
		{
			_putchar('1');
			iterate++;
		}
		else if (iterate)
			_putchar('0');
	}
	if (!iterate)
		_putchar('0');
}

