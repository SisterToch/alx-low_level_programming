#include "main.h"
/**
 * get_bit - returns the value of a bit in a specified index.
 * @n: checking bits
 * @index: the index
 *
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mirror, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	mirror = 1 << index;
	result = n & mirror;
	if (result == mirror)
		return (1);

	return (0);
}
