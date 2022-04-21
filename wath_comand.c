#include "shell.h"
/**
 *parsing_cmd - select option exit or display env or return command
 *@cmd: user typed command
 *Return: command line
 */
char *parsing_cmd(char **cmd)
{
	int i;

	if (!strcmp(cmd[0], "exit"))
	{
		clear_memory(cmd);
		exit(EXIT_SUCCESS);
	}
	
	else
	{
		return (cmd[0]);
	}
}
