
#include "shell.h"

#define TOKEN_BUFFER 128
#define TOKEN_DELIMITATOR " \a\r\t\n"

/**
* break_input - Create tokens
* @input: char pointer
* Return: char double pointer
*/

char **break_input(char *input)
{
int buffertoken = TOKEN_BUFFER, position = 0;
char **alltokens = malloc(buffertoken * sizeof(char *));
char **talltok;
char *token;

	if (!alltokens)
	{
		free(alltokens);
		exit(EXIT_FAILURE);
	}

	token = strtok(input, TOKEN_DELIMITATOR);
	while (token != NULL)
	{
		alltokens[position] = token;
		position++;

		if (position >= buffertoken)
		{
			buffertoken += TOKEN_BUFFER;
			talltok = malloc(buffertoken * sizeof(char *));
			talltok = alltokens;
			free(alltokens);
			/* new size */
			alltokens = malloc(buffertoken * sizeof(char *));
			alltokens = talltok;
			free(talltok);
			if (!alltokens)
			{
				free(alltokens);
				exit(EXIT_FAILURE);
			}
		}
	token = strtok(NULL, TOKEN_DELIMITATOR);
	}
/* end all now */
alltokens[position] = NULL;
/* send to execute command */
return (alltokens);
}
