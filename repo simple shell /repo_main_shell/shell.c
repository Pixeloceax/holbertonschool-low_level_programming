#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>

int main(int argc, char *argv[], char *execve_arg[])
{
    pid_t child;                            // variable de creation de child
    char *command[100], *tok, *ptr = NULL;  // creation de la variable command pour gérer les erreur quand il n'y a pas de commande de rentrer | permet aussi de limiter le nombre d'argument en cas de besoin
    size_t i, number_of_bytes;         
    int status;                          
  
    while (1)                               // pour le while j'ai pas compris pourquoi mais sa marche 
    {
      printf("$ ");                                     // $ utilisateur 
      if (getline(&ptr, &number_of_bytes, stdin) == -1) // verifie si une commande existe avant de crée des child
      {                                     
           break;                                       //break pour évité la creation de child
      }

      tok = strtok(ptr, " \t\n\r");  // en gros recup les commande dans le terminal |||| \t = tab  \r = carriage  return (pas tout compris pour celui-la mais sert a gestion des ligne)   \n = newline
      for (i = 0; i < 16 && tok != NULL; i++)
      {
          command[i] = tok;
          tok = strtok(NULL, " \t\n\r");
      }

      command[i] = NULL; // permet de "suprimer" les commande et de repartire avec le $"
      child = fork();

      if (child == 0) // gestion des ereurs | si le child = 0 verifie si c'est parcequ'il y a pas de comamnde si c le cas il retourne execve et exit ce qui permet de rentrer dans le processus d'en desous  et wait une commande 
      {                                                     
          if (execve(command[0], command, execve_arg))      
          {
              perror("execve");
              exit(EXIT_FAILURE);
          }
      }

       if (!strcmp("exit",ptr)) 
       {
           break;
       }
        if (child > 0)  // permet de rester dans le shell apres la fin d'une commande 
        wait(&status);  // att une nouvelle commamde 
    }
    
    putchar('\n');
    exit(status);    // permet de mettre fin au shell quand on ctrl C

}
