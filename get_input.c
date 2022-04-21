
#include "shell.h"
#define DELIMITA " \t\r\n"
/**
 * get_input - Tomamos una cadena como input tokenisar.
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
		return (NULL);
	}

	if (input == NULL)
	{
		parsed[0] = "";
		return (parsed);
	}

	parsed = strtok(input, DELIMITA);

	while (parsed != NULL)
	{
		command[index] = parsed;
		index++;
		parsed = strtok(NULL, DELIMITA);
	}
	command[index] = NULL;
	return (command);
}
