#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list of type list_t.
 * @h: Pointer to the head of the list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	/* Traverse the list and print each node's information */
	while (h)
	{
		if (!h->str)
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
