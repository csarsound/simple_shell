
#include "shell.h"
/**
 * get_input - Tomamos una cadena como input tokenisat.
 * @input: string
 * Return: matriz de cadena
 */

char **get_input(char *input)
{
	char **command;
	char *parsed = NULL;
	int index = 0;

	command = malloc(sizeof(char *) * BUFFER_SIZE);
	if (command == NULL)
	{
		perror("malloc failed");
		exit(1);
	}

	parsed = strtok(input, WHITESPACE);

	while (parsed != NULL)
	{
		command[index] = parsed;
		index++;
		parsed = strtok(NULL, WHITESPACE);
	}
	command[index] = NULL;
	return (command);
}
