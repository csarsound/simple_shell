#include "shell.h"
/**
* _strlen - function that calculates lenght of a string
* @str: string
* Return: the size  of the string
*/

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
