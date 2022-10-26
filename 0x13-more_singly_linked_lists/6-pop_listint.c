#include "lists.h"
#include "stdlib.h"
/**
 * pop_listint - pop the first element in a linked list.
 * @head: Pointer to a list.
 * Return: Integer(the value of the popped list)
 **/

int pop_listint(listint_t **head)
{
	listint_t *tp;
	int lists_value;

	if (!(*head != NULL))
		return (0);

	tp = *head;
	*head = tp->next;
	lists_value = tp->n;
	free(tp);
	return (lists_value);
}
