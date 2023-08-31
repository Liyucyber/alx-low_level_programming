#include "main.h"

/**
 * get_bit - a function to give value of a bit at index in a decimal number
 * @n: required number
 * @index: index of the bit
 *
 * Return: returns value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
