#include "shell.h"
/**
 *check_built_in - to do
 *@command: to do
 *Return: int(*)(char*,...) 
 */

int (*check_built_in (const char *command))(char *, ...)
{
    int i;

    built_in p[]= {{"env", print_env},
                {"exit", _exit_},
                /**{"setenv", _setenv},
                {"unsetenv", _unsetenv},**/
                {NULL, NULL}};
            
    for (i = 0; p[i].command; i++)
    {
        if (strcmp(command, p[i].command) == 0)
            return (p[i].f);
    }
    return (NULL);
}
