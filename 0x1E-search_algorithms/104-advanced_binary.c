#include "search_algos.h"

/**
  * advanced_binary_recursive - searches for a value in an array of integers
  * 								using the Binary search algorithm.
  * @array: A pointer to the first element of the [sub]array to search.
  * @l: The starting index of the [sub]array to search.
  * @r: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  */
int advanced_binary_recursive(int *array, size_t l, size_t r, int value)
{
	size_t q;

	if (r < l)
		return (-1);

	printf("Searching in array: ");
	for (q = l; q < r; q++)
		printf("%d, ", array[q]);
	printf("%d\n", array[q]);

	q = l + (r - l) / 2;
	if (array[q] == value && (q == l || array[q - 1] != value))
		return (q);
	if (array[q] >= value)
		return (advanced_binary_recursive(array, l, q, value));
	return (advanced_binary_recursive(array, q + 1, r, value));
}

/**
 * advanced_binary - Using advanced binary search it searches
 *                   for a value in a sorted array of integers.
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
