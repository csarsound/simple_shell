#include "shell.h"

int main(void)
{
char **firstword;
char *input;

while (1)
{
input = readline("unixsh> ");
firstword = get_input(input);
}
}

