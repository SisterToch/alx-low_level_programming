#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the  pointer pointing to the given input
 * @index: index starting from 0
 * Return: 1, else -1 upon error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = ~(1 << index);
	/*inverts the bits except the index-th, setting 0*/
	*n = *n & i;
	/*and operation btw the value pointed  to by n & i*/
	/*rendering the given  n  0*/

	return (1);
}
