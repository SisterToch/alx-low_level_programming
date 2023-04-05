#include "lists.h"

/**
 * sum_listint - the sum total of all the data in the function.
 * @head: points to the 1st node.
 * Return: sum of the data inside.
 *
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		/*sum of the values of n*/
		head = head->next;
	}
	return (sum);
}
