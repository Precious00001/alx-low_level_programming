#include "search_algos.h"

/**
  * _binary_search - Using binary search it searches for a
  *                      value in a sorted array of integers.
  * @array: A pointer to the first element of the array to search.
  * @left: The [sub]array starting index of search.
  * @right: The [sub]array ending index of search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t q;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (q = left; q < right; q++)
			printf("%d, ", array[q]);
		printf("%d\n", array[q]);

		q = left + (right - left) / 2;
		if (array[q] == value)
			return (q);
		if (array[q] > value)
			right = q - 1;
		else
			left = q + 1;
	}

	return (-1);
}

/**
  * exponential_search - Using exponential search it searches for a
  *                      value in a sorted array of integers.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *
  * Description: when compared in the array it prints a value every time.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t q = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (q = 1; q < size && array[q] <= value; q = q * 2)
			printf("Value checked array[%ld] = [%d]\n", q, array[q]);
	}

	right = q < size ? q : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", q / 2, right);
	return (_binary_search(array, q / 2, right, value));
}
