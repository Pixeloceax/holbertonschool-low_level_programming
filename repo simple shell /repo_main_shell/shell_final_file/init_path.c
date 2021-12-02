#include "shell.h"

path *init_path(void)
{
    path *head = NULL;
    char *path_value;
    int i = 0, j, k, length;
    char *value_to_fill;
    int checkpoint = 0;

    path_value = _getenv("PATH");
    for (i = 0; path_value[i]; i++)
    {
        if (path_value[i] == ':' || path_value[i] == '\0')
        {
            length = i - checkpoint + 2;  // 1 pour le \0 et 1 pour le / en plus
            value_to_fill = malloc(sizeof(char) * length);
            if (!value_to_fill)
                return (NULL);
            for (j = checkpoint, k = 0; j < i; j++, k++)
                value_to_fill[k] = path_value[j];
            value_to_fill[k] = '/';
            value_to_fill[k + 1] = '\0';
            add_node_end(&head, value_to_fill);
            i++;
            checkpoint = i;
        }
    }
    return(head);
}
