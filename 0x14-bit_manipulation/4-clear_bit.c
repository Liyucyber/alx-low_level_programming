#include "main.h"

/**
 * clear_bit - converts a given bit to zero.
 * @n:points the number to be changed.
 * @index:bit index to clear
 *
 * Return:returns 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
