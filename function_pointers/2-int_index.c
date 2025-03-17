#include "function_pointers.h"

/**
 * int_index - Searches for an int in an array using a fx pointer
 * @array: the array we are searching
 * @size: the num of elements in the array
 * @cmp: a pointer to the fx to compare values
 *
 * Return: the index of the first matching element,
 *         or -1 if no match is found or if size is <= 0
 */







int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
	  if (cmp(array[i]) != 0)
		  return (i);
  }
	return (-1);
}
