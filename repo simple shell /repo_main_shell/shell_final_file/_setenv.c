#include "shell.h"

/**
 *_setenv - to do
 * @name: to do
 * @value: to do
 * @overwrite: to do
 *Return: int
 */

int _setenv(const char *name, const char *value, int overwrite)
{
    int i, j, length;

    if (overwrite == 0)
        return (0);

    // Cas pour changer la valeur
    if (_getenv(name) != NULL)
    {
        for (i = 0; new_env[i]; i++)
        {
            for (j = 0; new_env[i][j] != '='; j++)
            {
                if (new_env[i][j] != name[j])
                    break;
            }
            if (new_env[i][j] == '=')
                break;
        }
        length = strlen(value) + strlen(name) + 2;
        free(new_env[i]);
        new_env[i] = malloc(sizeof(char) * length);
    }
    // Cas pour créer une nouvelles variable env
    else
    {
        for (i = 0; new_env[i]; i++)
            ;
        new_env = realloc(new_env, sizeof(char *) * (i + 2));
        if (!new_env)
            return (-1);
        new_env[i] = malloc(sizeof(char *) * (strlen(name) + strlen(value) + 2));
        if (!new_env[i])
            return (-1);
        new_env[i + 1] = NULL;
    }
    new_env[i] = strcat(new_env[i], name);
    new_env[i] = strcat(new_env[i], "=");
    new_env[i] = strcat(new_env[i], value);
    return (0);
}
