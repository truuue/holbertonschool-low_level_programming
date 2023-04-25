#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;
    pid_t pid;
    int i = 0;

    printf("Before fork\n");
    pid = fork();
    if(pid == 0)
    {
        printf("I'm the child and my pid is [%d]\n", getpid());
    }    
    if (pid == -1)
    {
        perror("Error:");
        return (1);
    }
    printf("After fork\n");
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
    return (0);
}