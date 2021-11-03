#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name as is
 * @f: f
 * @name: name
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
