#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

int main(int ac, char **av)
{
    // char *token;
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;

    while ((nread = getline(&line, &len, stdin)) != -1)
    {
        printf("-> [%ld]", nread);
        fwrite(line, nread, 1, stdout);
        printf("$ ");
    }
	
    return (0);
}