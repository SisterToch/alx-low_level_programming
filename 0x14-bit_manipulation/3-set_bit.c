#include "main.h"

/**
 * set_bit - the value of a bit to 1 at a given index.
 *  @n  : the pointer of the given input
 * @index: index starting from 0.
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	/*equivalent to raising 2 to the power of index*/
	/*so the  index-th  no is set to 1,  rest 0*/
	*n = *n | i;
	/*sets value  pointed to n to o w/o affcting the rest*/

	return (1);
}
