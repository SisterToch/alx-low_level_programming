#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *copy;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	/*Count the number of characters in the string*/
	while (str[len] != '\0')
		len++;

	/*Allocate memory for the new string- copy*/
	copy = (char *)malloc((sizeof(char) * len) + 1);
	if (copy == NULL)
		return (NULL);

	/*Copy the string*/
	for (i = 0; i < len; i++)
		copy[i] = str[i];
	/*add null byte character to the end of the new string*/
	copy[len] = '\0';

	return (copy);
}
