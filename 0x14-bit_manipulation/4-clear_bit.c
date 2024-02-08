#include "main.h"
/**
 * clear_bit - This is a function that sets
 *the value of a bit to 0 at a given index.
 * @n: The Pointer to the number that is to change
 * @index: That Index of the bit that is to clear
 * Return:success (1), failure (-1)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n); /*& preserves the bits that are 1
				       *in both operands and sets the bits that are different to 0
				      */
	return (1);
}
