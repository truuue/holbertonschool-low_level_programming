#include "main.h"

int main(int ac, char *av[1024], char *envp[])
{
    size_t len = 0;
    ssize_t nread;
    pid_t pid;
    char *line = NULL, *token, command[1024];
    int status, count = 0;
    (void) ac;

    while ((nread = getline(&line, &len, stdin)) != -1)
    {
        pid = fork();
        if (pid == 0)
        {
            count = 0;
            token = strtok(line, " \n");
            if (token == NULL)
                continue;
            while (token != NULL)
            {
                av[count] = token;
                count++;
                token = strtok(NULL, " \n");
            }
            av[count] = NULL;
            strcpy(command, av[0]);
            execve(command, av, envp);
            fprintf(stderr, "Error: command not found\n");
            exit(EXIT_FAILURE);
        }
        else if (pid < 0)
        {
            fprintf(stderr, "Error: failed to fork process\n");
            exit(EXIT_FAILURE);
        }
        else
        {
            waitpid(pid, &status, 0);
        }
    }
    free(line);
    return (0);
}