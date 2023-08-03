#include "main.h"
/**
 * set_bit -function that sets the value of a bit to 1 at a given index.
 * @n: The Pointer to the number to change
 * @index: an index of the bit that set to 1
 * Return: success (1),failure (-1)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n); /*returns 1 if either bit is 1, and 0 otherwise.*/
	return (1);
}
