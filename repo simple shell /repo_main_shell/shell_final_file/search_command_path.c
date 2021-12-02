#include "shell.h"
/**
 *search_command_path - to do
 *@command: to do
 *@path_value: to do 
 */
void search_command_path(char *command, path *path_value)
{
    int length;
    int i, j;
    char *command_to_test;
    struct stat st;
    while(path_value != NULL)
    {
        length = strlen(path_value->current_dir) + strlen(command) + 1;
        command_to_test = malloc(sizeof(char) * length);
        if (!command_to_test)
            return;
        for (i = 0; path_value->current_dir[i]; i++)
            command_to_test[i] = path_value->current_dir[i];
        for (j = 0; command[j]; j++, i++)
            command_to_test[i] = command[j];
        command_to_test[i] = '\0';
        printf("%s : ", command_to_test);
        if (stat(command_to_test, &st))
            printf("NOT FOUND\n");
        else 
            printf("FOUND\n");
        free(command_to_test);
        path_value = path_value->next;
    }
}
