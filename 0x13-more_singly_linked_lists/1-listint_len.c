#include "lists.h"

/**
 * listint_len - function that counts number of elements in it,
 * @h: the head pointer,
 * Return: the number of elements.
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t countn = 0;

	while (h != NULL)
	{
	h = h->next;
		countn++;
	}
	return (countn);
}
