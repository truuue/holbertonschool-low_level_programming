#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>

int main(void)
{
    int count = 0;
    size_t len = 0;
    ssize_t nread;
    char *line = NULL;
    char *argv[1024];
    char *token;

    printf("$ ");
    while ((nread = getline(&line, &len, stdin)) != -1)
    {
        printf("affichage -> [%ld]", nread);
        fwrite(line, nread, 1, stdout);
        printf("$ ");
        token = strtok(line, " ");
        while (token != NULL)
        {  
            printf("%s\n", token);
            token = strtok(NULL, " ");
            printf("$ ");
        }
    }
    return(0);
}