#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node.
 * @head:the double pointer.
 * Return: empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *new_node;
	int data;

	if (*head == NULL)
		return (0);
	new_node = *head;
	*head = new_node->next;
	data = new_node->n;
	free(new_node);
	return (data);
}

