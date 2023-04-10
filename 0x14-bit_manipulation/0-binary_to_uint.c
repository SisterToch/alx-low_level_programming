#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Points to a string of 0 and 1 characters.
 * Return: The converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;

	unsigned int Result = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		/*loop to validate the input string*/
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		Result <<= 1;
		/*pushes it to left, multiplying by 2*/
		if (b[i] == '1')
			Result = Result + 1;
	}
	return (Result);
}
