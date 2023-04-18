#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
    pid_t pid;
    pid_t ppid;
    int i = 0;
    int status;
    char *argv[] = {"/bin/ls", "-l", NULL};
    
    printf("Before fork :\n");
    pid = fork();
    if(pid == 0)
    {
        printf("child is [%d] and parent is [%d]\n", getpid(), getppid());
        execve(argv[0], argv, NULL);
    }
    if(pid == -1)
    {
        return (-1);
    }
    else
    {
    wait(&status);
    ppid = getpid();
	printf("After fork my pid is [%d]\n", ppid);
    }

    return (0);
}