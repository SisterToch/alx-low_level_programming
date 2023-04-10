#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: checs for bit
 * @index: the index starting from 0
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, result;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		/*since there are 8 bits  in a byte*/
		/*subtracting 1 from it, gives the max index*/
		return (-1);
	divisor = 1 << index;
	result = n & divisor;
	/*and operation on the input number and divisor*/
	if (result == divisor)
		return (1);

	return (0);
}
