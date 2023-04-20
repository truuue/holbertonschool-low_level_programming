#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

int main(int ac, char *av)
{
    int i = 1;
    char *token;

    for(i = 1; i < ac; i++)
    {
	    token = strtok(av[i], " ");
        int count = 0;
	    while(token != NULL)
	    {
		    printf("%s \n", token);
		    count++;
		    token = strtok(NULL, " ");
	    }
	    printf("(%d mots)\n", count);
    }
    return (0);
}