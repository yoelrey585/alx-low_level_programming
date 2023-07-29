#include "lists.h"
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	return (NULL);

	duplicate = strdup(str);
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (length = 0; str[length];)
	length++;

	new_node->str = duplicate;
	new_node->len = length;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}

