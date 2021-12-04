#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
void main()
{
  pid_t p;

  p = fork();

  if (p == 0)
  {
    printf("PID of child process, %d\n", getpid());
  }
  else
  {
    printf("PID of the Parent process, %d\n", getpid());
  }
}
