#include "lists.h"

/**
 *  sum_dlistint - returns the sum of all the data of list
 * @head: double pointer to the head of the list
 *
 * Return: if the list is empty, return 0
 */

int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}