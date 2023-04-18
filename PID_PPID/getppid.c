#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */

int main()
{
    int p_id, p_pid;

    p_id = getpid(); /*process id*/
    p_pid = getppid(); /*parent process id*/

    printf("Process ID: %u\n", p_id);
    printf("Parent Process ID: %u\n", p_pid);

    return 0;
}