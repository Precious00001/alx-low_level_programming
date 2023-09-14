#include "search_algos.h"

/**
 * jump_search - implement jump search algo
 * @array: given array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, j, s;

	if (array == NULL || size == 0)
		return (-1);

	s = sqrt(size);
	for (i = j = 0; j < size && array[j] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		i = j;
		j += s;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, j);

	j = j < size - 1 ? j : size - 1;
	for (; i < j && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
