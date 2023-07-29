#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list of type list_t.
 * @head: Pointer to the head of the list to be freed.
 */
void free_list(list_t *head)
{
	list_t *temp;

	/* Traverse the list and free each node */
	while (head)
	{
		/* Store the next node before freeing the current node */
		temp = head->next;

		/* Free the string memory in the current node */
		free(head->str);

		/* Free the current node */
		free(head);

		/* Move to the next node */
		head = temp;
	}
}
