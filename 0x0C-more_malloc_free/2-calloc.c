#include "main.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements of
 * @size bytes each and returns a pointer to the allocated memory.
 *
 * @nmemb: allocate memory for array
 * @size: allocate element of size bytes
 *
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*declare a space 4 space*/
	char *a;
	unsigned int b;

	/*if either is 0, return null*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	/*do the malloc and times them*/
	a = malloc(nmemb * size);
	/*if the malloc function fails, retun null*/
	if (a == NULL)
		return (NULL);
	/*check the lenght of the b*/
	for (b = 0; b < (nmemb * size); b++)
	/*memory set to zero*/
		a[b] = 0;
	return (a);
}
