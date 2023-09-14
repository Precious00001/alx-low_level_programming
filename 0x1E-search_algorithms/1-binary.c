#include "search_algos.h"

/**
 * recursive_search - using the Binary search algorithm it
 * searches for a value in an array of
 * integers
 *
 * @array: given array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t q;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (q = 0; q < size; q++)
		printf("%s %d", (q == 0) ? ":" : ",", array[q]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - implement  binary search  alg
 * @array: given array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
