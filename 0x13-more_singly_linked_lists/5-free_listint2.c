#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a listint_t list,
 * @head: a double pointer of the given list
 * Return: void after freeing
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		/*moves to the next & saves in next*/
		free(*head);
		*head = next;
	}
}

