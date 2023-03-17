#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and assigns chars
 * @size: the size of the array
 * @c: initial value
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	/*Check if memory allocation was successful*/
	if (array == NULL)
		return (NULL);

	/*Initialize the char array with the specified char*/
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
