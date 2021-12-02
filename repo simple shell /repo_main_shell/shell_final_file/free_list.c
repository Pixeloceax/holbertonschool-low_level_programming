#include "shell.h"

void free_list(path *head)
{
    path *tmp;

    while (head)
    {
        tmp = head;
        head = head->next;
        free(tmp->current_dir);
        free(tmp);
    }
}
