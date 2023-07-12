#include "search_algos.h"

/**
 * recursive_search - search for a value in an array of integers using binary search algorithm
 * @array: the array of integers
 * @size: the size of the array
 * @value: value to search for
 * Return: index of the number
 */

int recursive_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (mid && size % 2 == 0)
		mid--;

	if (value == array[mid])
		return ((int)mid);

	if (value < array[mid])
		return (recursive_search(array, mid, value));

	mid++;

	return (recursive_search(array + mid, size - mid, value) + mid);
}

/**
 * binary_search - calls binary search to return the index of the number
 * @array: array given
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
*/

int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
