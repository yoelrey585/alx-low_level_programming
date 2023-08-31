#include "main.h"
/**
 * clear_bit - sets a bit at a given index to 0
 * @n: pointer to the number
 * @index: index to be set to 0
 *
 * Return: on sucess 1, -1 on failure
**/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) | *n);
	return (1);
}
