#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using linear search
 * @array: the array of integers
 * @size: size of the array
 * @value: number to be searched for
 * Return: Always EXIT_SUCCESS
*/
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
