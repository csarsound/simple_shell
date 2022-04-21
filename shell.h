#ifndef H_SHELL
#define H_SHELL
#define BUFFER_SIZE 64

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <readline/readline.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdbool.h>
extern char **environ;

int cd(char *path);
char **get_input(char *input);
char *readLine(void);
void signal_handler(int sig_num);
char *parsing_cmd(char **cmd);
int _strlen(char *s);
void clear_memory(char **args);

#endif
