#include "shell.h"
/**
 * _exit_ - to do
 *@...: to do
 *Return: int
 */
int _exit_(__attribute__((unused)) char *command, ...)
{
    va_list arg;
    char *status;

    va_start(arg, command);
    status = va_arg(arg, char*);
    if (status == NULL)
    {
        free_env();
        exit(0);
    }
    else
    {
        free_env();
        exit(atoi(status));
    }
    return (0);
}
