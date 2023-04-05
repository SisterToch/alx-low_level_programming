#include "lists.h"

/**
 * reverse_listint - the function reverses listint_t
 * @head: a double pointer,
 * Return: pointer to the first node in
 * the reversed list.
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former, *next;

	if (*head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	former = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = next;
	}
	*head = former;
	return (*head);
}

