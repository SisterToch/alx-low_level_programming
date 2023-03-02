#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destl = 0;
	int srcl = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destl++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srcl++;
	for (i = 0 ; i < n ; i++)
		dest[destl + i] = src[i];
	return (dest);
}
