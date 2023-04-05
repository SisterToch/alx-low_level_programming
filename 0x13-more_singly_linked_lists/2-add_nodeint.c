#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - adds a new node at beginning of funct.
  * @head: the head of double pointer,
  * @n: integer in the list.
  * Return: NULL upon failure
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *latest_node;

	if (head == NULL)
		return (NULL);
	latest_node = malloc(sizeof(listint_t));
	if (latest_node == NULL)
		return (NULL);
	latest_node->n = n;
	/*set value of latestnode*/
	latest_node->next = *head;
	/*point latestnode to head*/
	*head = latest_node;
	/*make latestnode head*/
	return (latest_node);
}
