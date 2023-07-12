#include "search_algos.h"

/**
 * record_search - This searches for a value in an array of
 * integers using Binary search algorithm
 *
 * @array: The array given
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */
int record_search(int *array, size_t size, int value)
{
        size_t half = size / 2;
        size_t i;

        if (array == NULL || size == 0)
                return (-1);

        printf("Searching in array");

        for (i = 0; i < size; i++)
                printf("%s %d", (i == 0) ? ":" : ",", array[i]);

        printf("\n");

        if (half && size % 2 == 0)
                half--;

        if (value == array[half])
        {
                if (half > 0)
                        return (record_search(array, half + 1, value));
                return ((int)half);
        }

        if (value < array[half])
                return (record_search(array, half + 1, value));

        half++;
        return (record_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - it calls to record_search to return
 * the index of the number
 *
 * @array: The array to be used
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */
int advanced_binary(int *array, size_t size, int value)
{
        int index;

        index = record_search(array, size, value);

        if (index >= 0 && array[index] != value)
                return (-1);

        return (index);
}
