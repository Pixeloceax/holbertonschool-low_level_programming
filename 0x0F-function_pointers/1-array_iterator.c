#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - main fonction
 * @array: array
 * @size: size
 * @action: action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array !=NULL && size > 0 && action !=NULL)
	{
		for ( ; i < size; i++)
		{
			action(array[i]);
		}
	}
}
