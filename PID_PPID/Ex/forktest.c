#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void)
{
  pid_t pid;
  pid_t ppid;
  int i = 0;

  printf("before fork\n");
  pid = fork();
  if (pid == 0)
  {
    printf("le pid de l'enfant est [%d]\n", getpid());
  }
  if (pid == -1)
  {
    perror("Error : ");
    return (1);
  }
  ppid = getpid();
  printf("After fork my pid is [%d] \n", ppid);
  return (0);
}