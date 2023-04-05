#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - adds a node at end of the listint_t list.
  * @head: the head of double pointer,
  * @n: node added to the end.
  * Return: NULL upon failure.
  *
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *latest_node;
	listint_t *end_node;

	if (head == NULL)
		return (NULL);
	latest_node = malloc(sizeof(listint_t));
	if (latest_node == NULL)
		return (NULL);
	latest_node->n = n;/*set the value of new node*/
	latest_node->next = NULL;
	if (*head == NULL)
	{
	*head = latest_node;
		return (latest_node);
	}
	end_node = *head;
	while (end_node->next != NULL)
		/*transverse node to the last*/
	{
		end_node = end_node->next;
	}
	end_node->next = latest_node;
	/*link new to end node*/
	return (latest_node);
}
