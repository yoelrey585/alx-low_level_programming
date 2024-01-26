#include "lists.h"

/**
 * dlistint_len - number of elements in a dlist
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}