#include "shell.h"
/**
 *_strcpy - prints n elements of an array of integers
 *@dest: input
 *@src: input
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	char *r = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (r);
}

/**
 *_strdup -  duplicate of the string pointed to by str
 *@str: input
 *Return: string
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *cp;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i) != '\0')
	{
		i++;
	}

	cp = malloc(i * sizeof(char) + 1);

	if (cp == NULL)
	{
		return (NULL);
	}

	while (*(str + j) != '\0')
	{
		cp[j] = str[j];
		j++;
	}

	*(cp + j) = '\0';

	return (cp);
}
