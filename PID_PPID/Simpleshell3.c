#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int ac, char *av[1024], char *envp[])
{
	size_t len = 0;
	ssize_t nread;
	char *line = NULL, *token, command[1024];
	int count = 0, pid = 0, status;
	(void) ac;

	while ((nread = getline(&line, &len, stdin)) != -1)
	{
        count = 0;
        token = strtok(line, " \n");
		if(token == NULL)
			continue;
		while (token != NULL)
		{
			av[count] = token;
			count++;
			token = strtok(NULL, " \n");
		}
        av[count] = NULL;
		pid = fork();
		if (pid == 0)
		{
			sprintf(command, "/bin/%s", av[0]);
			execve(command, av, envp);
            fprintf(stderr, "Erreur: commande introuvable\n");
		}
		else
		{
			wait(&status);
		}
	}
	free(line);
	return(0);
}