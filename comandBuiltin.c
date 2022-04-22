#include "shell.h"
/**
 * cd - Si el comando no es predefinido entonces entra en esta funcion
 * @path: comando echo
 * Return: comando echo
 */

int cd(char *path)
{
	return (chdir(path));
}

char *parsing_cmd(char **cmd)
{
    
	if (!strcmp(cmd[0], "exit"))
	{
		clear_memory(cmd);
		exit(EXIT_SUCCESS);
	}
	else
	{
		return (cmd[0]);
	}
}

/**
 * free_arrays - function that free memory already used
 * @array: memory to free
 */
void free_arrays(char **array)
{
	/*int j;*/
	/*int k;*/

	if (array == NULL || *array == NULL)
		return;
	/*j = 0;*/
	/*k = 0;*/

	/*while (array[j])*/
	/*j++;*/
	/*while (k < j)*/
	/*{*/
		/*free(array[k]);*/
		/*k++;*/
	/*}*/
	/*if (array[j] == NULL)*/
	/*free(array[j]);*/
	free(array);
}
