#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of the listint_t list,
 * * @h: head of linklist node,
 * * Return: the total no of nodes.
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t countn = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		countn++;
	}
	return (countn);
}
