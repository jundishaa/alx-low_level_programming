#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 * Return:for big (0), little (1)
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *x = (char *) &y;

	return (*x);
}
