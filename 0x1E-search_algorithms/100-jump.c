#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int jump_search(int *array, size_t size, int value)
{
	int j = 0;
	int q = 0;
	int i = 0;

	if (array == NULL)
		return (-1);
	j = sqrt(size);
	while (array[i] < value && i < (int) size)
	{
		q = i;
		i = q + j;
		if (q < (int) size)
			printf("Value checked array[%d] = [%d]\n", q, array[q]);
	}

	if (q >= (int) size && array[size] != value)
		q -= j;

	printf("Value found between indexes [%d] and [%d]\n", q, q + j);

	while (array[q] < value)
	{
		if (q >= (int) size)
			break;
		printf("Value checked array[%d] = [%d]\n", q, array[q]);
		q += 1;
	}

	if (array[q] == value)
	{
		printf("Value checked array[%d] = [%d]\n", q, array[q]);
		return (q);
	}
	return (-1);
}
