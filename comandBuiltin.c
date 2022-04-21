#include "shell.h"
/**
 * cd - Si el comando no es predefinido entonces entra en esta funcion
 * @path: comando echo
 * Return: comando echo
 */

int cd(char *path)
{
	return (chdir(path));
}

char *parsing_cmd(char **cmd)
{
    
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
