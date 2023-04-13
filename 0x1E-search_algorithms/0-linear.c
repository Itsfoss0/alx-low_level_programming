#include "search_algos.h"

/**
  * linear_search - function tolook for a value in an arrray of integers
  * @array: ptr to the first element  in the array.
  * @size: number of elements in the array.
  * @value: Value to search for.
  * Return: (-1) If value is not in array or array is NULL.
  *         Otherwise, first index of value
  * Description: Print each value in the array as it gets compared.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}

	return (-1);
}
