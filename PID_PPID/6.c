#include "main.h"

int main(int ac, char *av[1024], char *envp[])
{
    size_t len = 0;
    ssize_t nread;
    pid_t pid;
    char *line = NULL, *token, command[1024], *path, *dir;
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
            if (strcmp(av[0], "ls") == 0)
            {
                strcpy(command, "/bin/ls");
                av[0] = command;
            }
            else if (strcmp(av[0], "pwd") == 0)
            {
                strcpy(command, "/bin/pwd");
                av[0] = command;
            }
            else if (strcmp(av[0], "cat") == 0)
            {
                strcpy(command, "/bin/cat");
                av[0] = command;
            }
            else
            {
                path = getenv("PATH");
                dir = strtok(path, ":");
                while (dir != NULL)
                {
                    sprintf(command, "%s/%s", dir, av[0]);
                    if (access(command, X_OK) == 0)
                    {
                        av[0] = command;
                        break;
                    }
                    dir = strtok(NULL, ":");
                }
            }
            execve(av[0], av, envp);
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