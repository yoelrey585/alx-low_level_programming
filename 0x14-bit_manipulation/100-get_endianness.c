#include "main.h"

/**
 * get_endianness - checks if a machine is huge or small endian
 * Return: 0 for huge, 1 for small
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
