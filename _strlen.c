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

/**
 *_strcat - concatinate two strings together
 *@src: input
 *@dest: input
 *Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	i = _strlen(dest);

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}
