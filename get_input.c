
#include "shell.h"
/** Tomamos una cadena como input. Usamos la función de biblioteca strtokpara dividir la cadena por el carácter spacey devolver una matriz de cadenas en su lugar. También terminamos la matriz por NULL. **/


char **get_input(char *input) {
    char **firstword = malloc(8 * sizeof(char *));
    if (firstword == NULL) {
        perror("malloc failed");
        exit(1);
    }

    char *parsed = NULL;
    int index = 0;

    parsed = strtok(input, " ");
    while (parsed != NULL) {
        firstword[index] = parsed;
        index++;

        parsed = strtok(NULL, " ");
    }

    firstword[index] = NULL;
    return firstword;
}
