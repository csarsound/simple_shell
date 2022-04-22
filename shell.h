#ifndef H_SHELL
#define H_SHELL
#define BUFFER_SIZE 64
#define WHITESPACE " \n\r\t"
extern char **environ;

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
void signal_handler(int sig_num);
char *parsing_cmd(char **cmd);
void clear_memory(char **args);
int _strlen(char *str);
char *_path(char *filename);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
char *_strcat(char *dest, char *src);

#endif
