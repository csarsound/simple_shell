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
