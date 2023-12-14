#include "main.h"
/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number
 * @index: index to be set to 1
 *
 * Return: on sucess 1, -1 on failure
**/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
