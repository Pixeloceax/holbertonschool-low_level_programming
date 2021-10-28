#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Recode the calloc function
 *
 * @nmemb: Length of the array that contain pointers
 * @size: Size of the elements pointed
 *
 * Return: NULL if any problem, pointer to the array else (succes)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		*(pointer + i) = 0;

	return (pointer);
}
