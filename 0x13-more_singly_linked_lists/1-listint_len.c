#include "lists.h"

/**
 * listint_len - returns the number of element
 * in a linked listint_t list.
 * @h: head pointer
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
	h = h->next;
		number++;
	}
	return (number);
}
