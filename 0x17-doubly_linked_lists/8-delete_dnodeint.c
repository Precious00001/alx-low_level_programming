#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 *
 * @head: head
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *a1;
	dlistint_t *a2;
	unsigned int i;

	a1 = *head;

	if (a1 != NULL)
		while (a1->prev != NULL)
			a1 = a1->prev;

	i = 0;

	while (a1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = a1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				a2->next = a1->next;

				if (a1->next != NULL)
					a1->next->prev = a2;
			}

			free(a1);
			return (1);
		}
		a2 = a1;
		a1 = a1->next;
		i++;
	}

	return (-1);
}
