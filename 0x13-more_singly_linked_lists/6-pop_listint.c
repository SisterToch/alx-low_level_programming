#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *track;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	track = *head;
	*head = track->next;
	n = track->n;
	free(track);
	return (n);
}

