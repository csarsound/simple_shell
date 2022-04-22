#include "shell.h"
/**
 * main - function main
 * Return: 0
 */
int main(int argc, char **argv, char **env)
{
	char **command;
	char *input;
	pid_t child_pid;
	int stat_loc;
	char **commands;

	(void) argc;
	(void) argv;

	signal(SIGINT, signal_handler);
	while (1)
	{
		input = readLine();
		command = get_input(input);
		if (!command[0])
		{/* Handle empty commands */
			free(input);
			free(command);
			continue;
		}

		input = NULL;
		input = parsing_cmd(command);

		if (strcmp(command[0], "cd") == 0)
		{
			if (cd(command[1]) < 0)
			perror(command[1]);/* Skip the fork */
			continue;
		}
		child_pid = fork();

		if (child_pid < 0)
		{
			perror("Fork failed");
			exit(1);
		}
		if (child_pid == 0)
		{
			commands = get_route(command, env);
			signal(SIGINT, SIG_DFL);/* Never returns if the call is successful */
			if (execvp(commands[0], commands) < 0)
			{
				perror(commands[0]);
				exit(1);
			}
		} else
		{
			waitpid(child_pid, &stat_loc, WUNTRACED);
		}
		if (!input)
		free(input);
		if (!commands)
		free(commands);
	}
	return (0);
}
