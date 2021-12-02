#include "shell.h"
/**
 *copy_env - to do
 *@env: to do  
 */
void copy_env(char **env)
{
    int i, j, length;

    for (length = 0; env[length]; length++)
        ;

    new_env = malloc(sizeof(char *) * (length + 2));
    if (!new_env)
        return;

    for (i = 0; env[i]; i++)
    {
        new_env[i] = strdup(env[i]);
        if (!new_env[i])
        {
            for ( ; i >= 0; i--)
                free(new_env[i]);
            free(new_env);
            return;
        }
    }
    new_env[i] = NULL;
    return;
}
