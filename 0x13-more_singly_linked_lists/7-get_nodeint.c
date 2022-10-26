#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Find node at position index in a list.
 * @head: Address of the first node in a list.
 * @index: Position of a the node to find (starting from 0).
 * Return: Pointer to he found node
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int start = 0;

	if (head == NULL)
		return (NULL);
	for (start; start < index; start++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
