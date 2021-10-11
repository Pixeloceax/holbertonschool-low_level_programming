#include "main.h"
/**
 * swap_int - check the code
 *@a: oui
 *@b: non
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
