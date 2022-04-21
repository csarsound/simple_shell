#include "shell.h"
/**
 *clear_memory - free heap memory
 *@args: input
 */
void clear_memory(char **command)
{
	int i;

	if (command && *command)
	{
		for (i = 0; command[i]; i++)
		{
			free(command[i]), command[i] = NULL;
		}
		free(command), command = NULL;
	}
}
