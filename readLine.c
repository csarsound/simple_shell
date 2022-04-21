
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
	index = getline(&input, &size, stdin);
	if (index == EOF)
	{
		free(input);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		exit(EXIT_SUCCESS);
	}
	input[index - 1] = '\0';

	return (input);
}
