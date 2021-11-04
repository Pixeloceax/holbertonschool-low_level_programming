#ifndef function_variadic
#define function_variadic

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 *struct print_tt - print
 *@IJK: IJK
 *@print: print
 */


typedef struct print_tt
	{
		char *IJK;
		void (*print)(va_list arg);
	}	print_tt_t;

#endif /* function_variadic */
