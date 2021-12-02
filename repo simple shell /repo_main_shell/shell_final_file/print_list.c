#include "shell.h"


size_t print_list(const path *h)
{
    const path *tmp = h;

    while (tmp != NULL)
    {
        printf("%s\n", tmp->current_dir);
        tmp = tmp->next;
    }
    return (1);
}
