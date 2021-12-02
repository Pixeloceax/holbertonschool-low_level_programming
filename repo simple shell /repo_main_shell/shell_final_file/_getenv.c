#include "shell.h"

/**
 *_getenv - to do
 *@env: to do
 *Return: char* 
 */

char *_getenv(const char *env)
{
    int i, j, test;

    for (i = 0; new_env[i]; i++)
    {
        for (j = 0; new_env[i][j] != '='; j++)
        {
            if (new_env[i][j] != env[j])
                break;
        }
        if (new_env[i][j] == '=')
            break;
    }
    if (new_env[i] == NULL)
        return (NULL);
    for (j = 0; new_env[i][j] != '='; j++)
        ;
    j++;
    return((*(new_env + i) + j));
}
