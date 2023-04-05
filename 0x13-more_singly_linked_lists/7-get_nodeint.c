#include "lists.h"

/**
 * get_nodeint_at_index - funct printing the nth node of the function.
 * @head: poin of the first node.
 * @index: the index of the node.
 * Return: pointer of Index
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
		/*iterate thru the loop*/
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
