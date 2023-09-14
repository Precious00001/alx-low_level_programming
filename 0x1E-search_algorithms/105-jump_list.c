#include "search_algos.h"

/**
 * jump_list - searches for a value in an array of
 * 				integers using the Jump search algorithm.
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, stepSize;
	listint_t *node, *j;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	stepSize = sqrt(size);
	for (node = j = list; j->index + 1 < size && j->n < value;)
	{
		node = j;
		for (step += stepSize; j->index < step; j = j->next)
		{
			if (j->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", j->index, j->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, j->index);

	for (; node->index < j->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
