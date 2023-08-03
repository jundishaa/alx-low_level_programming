#include "main.h"
/**
 * binary_to_uint -This code converts binary to unsigned int
 * @b: This is string containing the binary numbers
 * Return:Converted numbers
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int number = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		number = 2 * number + (b[a] - '0');
	}
	return (number);
}
