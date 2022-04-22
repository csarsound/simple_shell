#include "shell.h"

/**
* read_input - Reads stdin
* @input: char double pointer
* @bufferinput: size_t pointer
* Return: Char
*/

char *read_input(char **input, size_t *bufferinput)
{
ssize_t readchar = 0;
readchar = getline(input, bufferinput, stdin);

	/* check if getline works */
	if (readchar == EOF)
	{
		/* reach the end */
		free(*input);
		exit(EXIT_SUCCESS);
	}
	if (readchar == -1)
	{
		free(*input);
		exit(EXIT_FAILURE);
	}
return (*input);
}
