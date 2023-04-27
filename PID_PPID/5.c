#include "main.h"

int main(int ac, char *av[1024], char *envp[])
{
    size_t len = 0;
    ssize_t nread;
    pid_t pid;
    char *line = NULL, *token, command[1024], *path, *dir;
    int status, count = 0, found = 0;
    struct stat st;
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
            strcpy(command, "/bin/");
            strcat(command, av[0]);
            if (stat(command, &st) == 0 && st.st_mode & S_IXUSR)
            {
                av[0] = command;
            }
            else
            {
                path = getenv("PATH");
                dir = strtok(path, ":");
                while (dir != NULL)
                {
                    strcpy(command, dir);
                    strcat(command, "/");
                    strcat(command, av[0]);
                    if (access(command, X_OK) == 0)
                    {
                        av[0] = command;
                        found = 1;
                        break;
                    }
                    dir = strtok(NULL, ":");
                }
                if (!found)
                {
                    fprintf(stderr, "Error: command not found\n");
                    exit(EXIT_FAILURE);
                }
            }
            execve(av[0], av, envp);
            fprintf(stderr, "Error: failed to execute command\n");
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