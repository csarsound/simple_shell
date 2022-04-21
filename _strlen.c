#include "shell.h"

/**
 * _strlen - pointer for the string
 * @s: pointer
 * Return: pointer
 */

int _strlen(char *s)
{

	int lon;

	lon = 0;

	while (s[lon] != '\0')
	{
		lon++;
	}
	return (lon);
}
