#include "main.h"
/**
 * get_bit - This Code returns the value of a bit at a given index
 * @n:The number to search for
 * @index:The given index of the bit
 * Return: The Value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int y;

	if (index > 63)
		return (-1);

	y = (n >> index) & 1;

	return (y);
}

