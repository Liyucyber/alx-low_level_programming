#include "main.h"

/**
 * set_bit - a functio to let a bit at a given index to 1
 * @n: points the number to be changed
 * @index:bit index to be set to one.
 *
 * Return: returns 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
