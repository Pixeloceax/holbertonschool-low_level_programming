#ifndef SHELL_H
#define SHELL_H

/* Include library */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <signal.h>
#include <stdarg.h>

/* Struct */

/**
* struct path - Each node contain a directory of the PATH
*
* @current_dir: Str that contain a directory
* @next: Pointer to the next node
*/
typedef struct path
{
    char *current_dir;
    struct path *next;
} path;

/**
* struct built_in - Built in command
*
* @command: Command to check (without any flag) 
* @f: Pointer to function to use
*/
typedef struct built_in
{
    char command;
    int (f)(char , ...);
} built_in;

/* Prototype */

void copy_env(char env);
int _setenv(const char *name, const char *value, int overwrite);
char *_getenv(const char *env);
void free_env(void);
path *init_path(void);
path *add_node_end(path head, char *str);
size_t print_list(const path *h);
void free_list(path *head);
void search_command_path(char *command, path *path_value);
int print_env(char comand, ...);
int (check_built_in (const char *command))(char *, ...);
int exit(attribute((unused)) char command, ...);


#endif /* SHELL_H */