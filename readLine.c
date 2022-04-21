
   #include "shell.h"

/**
 *readLine - Display a prompt and wait for the user to type a command
 *Return: command entred by user
 */
char *readLine(void)
{
	size_t size = 0;
	int index;
	char *input;

	input = NULL;

	if (isatty(STDIN_FILENO))
		printf("$: ");

	getline(&input, &size, stdin);
	
	if (_strcmp(input, "\n") == 0)
	{
		
		free(input);
		return (NULL);
	}
	while (input[index])
	{
		index++;
	}
	if (index <= 1)
	{
		fflush(stdin);
		input = "";
	}
	return (input);
}
