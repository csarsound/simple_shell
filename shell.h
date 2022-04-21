#ifndef H_SHELL
#define H_SHELL


#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <readline/readline.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdbool.h>

int cd(char *path);
char **get_input(char *input);
char *readLine(void);

#endif