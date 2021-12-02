#include "shell.h"

void free_env(void)
{
    int i;

    for(i = 0; new_env[i]; i++)
        free(new_env[i]);
    free(new_env);
}
