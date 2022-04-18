#include "shell.h"

int main(void)
{
char **firstword;
char *input;
pid_t child;
int location;


while (1)
{
input = readline("unixsh> ");
firstword = get_input(input);
 if (!firstword[0]) {      
            free(input);
            free(firstword);
            continue;
        }
 if (strcmp(firstword[0], "cd") == 0) {
            if (cd(firstword[1]) < 0) {
                perror(firstword[1]);
            }
            continue;
        }
         child = fork();
        if (child < 0) {
            perror("Fork failed");
            exit(1);
        }
         if (child == 0) {
            if (execvp(firstword[0], firstword) < 0) {
                perror(firstword[0]);
                exit(1);
            }
                 }
                  else {
            waitpid(child, & location, WUNTRACED);
        }

        if (!input)
            free(input);
        if (!firstword)
            free(firstword);
    }

    return 0;
}

