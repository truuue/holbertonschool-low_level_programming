#include <stdlib.h>
#include "3-calc.h"

/*
 * main - main func
 * @argc: arg count
 * @argv: string in array
 * Return: 0
 */

int main(int argc, char **argv)
{
    int a, b, resultat;
    char *operateur;
    int (*operation)(int a, int b);
    
    (void)argc;

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    operateur = argv[2];

    operation = get_op_func(operateur);
    if (operation == NULL)
    {
        printf("The operator doesnt exist");
        exit(-1);
    }
    resultat = operation(a, b);
    printf("Resultat est %d\n", resultat);

    return (0);
}
