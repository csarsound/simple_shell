#include "shell.h"

/**
* builtins - List of builtins
* @builtinlist: char duoble pointer
* Return: int
*/

int builtins(char **builtinlist)
{
int s_list;
int s_char;
s_list = sizeof(builtinlist);
s_char = sizeof(char *);

	/* size of list in chars */
	return (s_list / s_char);
}
