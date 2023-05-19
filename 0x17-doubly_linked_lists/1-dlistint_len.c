#include "lists.h"

/**
 * dlistint_len - num of elements
 * a double linked list
 *
 * @a: head
 * Return: num of nodes
 */
size_t dlistint_len(const dlistint_t *a)
{
	int count;

	count = 0;

	if (a == NULL)
		return (count);

	while (a->prev != NULL)
		a = a->prev;

	while (a != NULL)
	{
		count++;
		a = a->next;
	}

	return (count);
}
