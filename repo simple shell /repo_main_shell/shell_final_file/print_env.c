#include "shell.h"
/**
 * print_env
 *@...: to do
 *Return: int 
 */
int print_env(__attribute__((unused)) char *comand, ...)
{
    int i;
    
    for (i = 0; new_env[i]; i++)
        printf("%s\n", new_env[i]);
    return (0);
}
