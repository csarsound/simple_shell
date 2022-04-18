#include "shell.h"
/** Si el comando no es predefinido entonces entra en esta funcion*/

int cd(char *path) {
    return chdir(path);

}
