# 0X16.C - Simple_shell
### We have rewrite a shell systeme

![](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/235/shell.jpeg)
## Simple shell
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## 
***
## shell body
### [main.c](./main.c)
```
main is the central code it contains the main function of simple shell
```
***
## shell.h
### [shell.h](./shell.h)
```
library containing all standard libraries and structures
```

***
## `PATH` command
### [init_path](./init_path.c)
```
implementation of the command PATH : print the actual PATH
```

***
## `exit` command
### [exit](./exit)

```
implementation of the command exit : leave simple shell 
(crtl-C was disable)
```

***
## _strtok
###  [_strtok](./_strtok)
```
we have recreate the strtok function he work exactly like the real strtok
```
***
## copy_env
### [copy_env](./copy_env.c)
```
copy the actual environement 
```

***
## _getenv 
###  [_getenv](_getenv.c)
```
we have recreate the getenv function he work exactly like the real getenv
```

***
## _setenv
### [_setenv](./_setenv.c)
```
we have recreate the setenv function he work exactly like the real setenv
```

***
## `env` command
### [print_env](./print_env.c)
```
implementation of env command : print actual enviroment
```

***
## free all environement variable
### [free_env](./free_env.c)
``` 
free all environement variable
```
***
## print chained list
### [print_list](./print_list.c)
```
print chained list
```

***
## free all chained list variable
### [free_list](./free_list.c)
```
free all chained list variable
```

***
## search_command_path
### [search_command_path](./search_command_path.c)
```
search_command_path
```

***
## check_built_in
### [check_build_in](./check_built_in.c)
```
check if each command exists before forking and allocate memory if necessary
```

***
## add_node_end
### [add_node_end](./add_node_end.c)
```
add node end
```

***
## man page for simple shell
### [man_1_simple_shell](./man_1_simple_shell)
```
man contain all command add in the simple shell
use "man ./man_1_simple_shell" for display the man page in the terminal
```
***

## Contributors

 ### [Mickael Boillaud](https://github.com/Camaltra) & [Axel Valentin](https://github.com/Pixeloceax) & [Jason Leuchart](https://github.com/Astambar)

# for Holberton School