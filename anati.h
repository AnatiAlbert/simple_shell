#ifndef ANATI_H
#define ANATI_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>

#define PROMPT "anati$ "

extern char **environ;
void split_token(char *line_tk, char **arg_anati);
void exec_anati(char **arg_anati);
void clean_anati(char *line_anati);

#endif /*ANATI_H*/
