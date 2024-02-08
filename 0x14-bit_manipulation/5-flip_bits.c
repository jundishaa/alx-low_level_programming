#include "main.h"
/**
 * flip_bits - This is a function that returns the number of bits
 *you would need to flip To get from one number to another
 * @n: This is the first number
 * @m:and the  second number
 * Return: The number of bits that is  to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, x = 0;
	unsigned long int now;
	unsigned long int thisexclusive = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		now = thisexclusive >> z;
		if (now & 1)
			x++;
	}
	return (x);
}

