#include "lists.h"

/**
 * listint_len - return number of elements in a linked list.
 * @h: pointer to a singly linked list.
 * Return: an int.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int count = 0;

	temp = h;
	while (temp)
	{
		count += 1;
		temp = temp->next;
	}
	return (count);
}
