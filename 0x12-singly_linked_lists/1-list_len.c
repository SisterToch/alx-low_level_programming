#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements
 * in a linked list_t list
 * @h: name of the list
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int number = 0;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
