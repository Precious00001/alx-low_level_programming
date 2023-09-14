#include "search_algos.h"

/**
 * interpolation_search - implement  interpolation search  algo
 * @array: given array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: first index or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, r;
	double f;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (size)
	{
		f = (double)(r - l) / (array[r] - array[l]) * (value - array[l]);
		i = (size_t)(l + f);
		printf("Value checked array[%d]", (int)i);

		if (i >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[i]);
		}

		if (array[i] == value)
			return ((int)i);

		if (array[i] < value)
			l = i + 1;
		else
			r = i - 1;

		if (l == r)
			break;
	}

	return (-1);
}
