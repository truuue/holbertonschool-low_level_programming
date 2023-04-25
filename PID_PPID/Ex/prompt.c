#include <stdio.h>
#include <sys/types.h>

int main(int ac, char **av)
{
    char *line = NULL;
    size_t len = 0;
    ssize_t nread;
           
    printf("$ ");
    while ((nread = getline(&line, &len, stdin)) != -1)
    {
        printf("Affichage -> [%ld]", nread);
        fwrite(line, nread, 1, stdout);
        printf("$ ");
    }
    return (0);
}