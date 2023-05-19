#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 *
 * @head: head
 * @n: value of the element
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	a = *head;

	if (a != NULL)
	{
		while (a->next != NULL)
			a = a->next;
		a->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = a;

	return (new);
}
