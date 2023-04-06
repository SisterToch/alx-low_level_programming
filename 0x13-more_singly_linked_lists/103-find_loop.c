#include "lists.h"

/**
 * find_listint_loop - function that finds a loop(beginning
 * inclusive)
 * @head: pointer in function
 * Return: pointer to the begining of the loop.
 *
 */


listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail;
	listint_t *cheetah;

	if (head == NULL || head->next == NULL)
			return (NULL);

	snail = cheetah = head;

	while (snail && cheetah && cheetah->next)
	{
		snail = snail->next;
		cheetah = cheetah->next->next;
		if (snail == cheetah)
			break;
	}

	if (snail != cheetah)
		return (NULL);

	snail = head;

	while (snail != cheetah)
	{
		cheetah = snail->next;
		cheetah = cheetah->next;
	}

	return (cheetah);
}
