#include "main.h"
/**
 * get_endianness - checks the endianness
 * Endianess is the order of byte in computer memory
 * i: an integer value
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i;
	char *E;

	i = 1;
	/*sets the value of i to 1 to create multibyte pattern*/
	E = (char *)&i;
	/*assigns memory address of i to E, then pointingE to 1st byte*/

	return (*E);
}
