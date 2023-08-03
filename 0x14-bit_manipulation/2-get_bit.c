#include "main.h"

/**
 * get_bit - Returns the value of a bit
 * at a specific index in a decimal number.
 * @n: Number to search.
 * @index: Index of the bit.
 *
 * Return: Value of the bit (0 or 1), or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
