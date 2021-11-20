#include <stdio.h>
#include <unistd.h>
#include <signal.h>
void main()
{
  pid_t p, q, r;

  printf("pid of main program:\t%d\n", getpid());
  p = fork();

  if (p == 0)
  {
    printf("In child process1,\tpid:\t%d,\tppid:\t%d\n", getpid(), getppid());
  }
  else
  {
    printf("In parent from child 1,\t\tpid:\t%d,\tfork returned:\t%d\n", getpid(), p);
  }
  q = fork();
  if (q == 0)
  {
    printf("In child process2,\tpid:\t%d,\tppid:\t%d\n", getpid(), getppid());
  }
  else
  {
    printf("In parent from child 2,\t\tpid:\t%d,\tfork returned:\t%d\n", getpid(), p);
  }
  r = fork();
  if (r == 0)
  {
    printf("In child process3,\tpid:\t%d,\tppid:\t%d\n", getpid(), getppid());
  }
  else
  {
    printf("In parent from child 3,\t\tpid:\t%d,\tfork returned:\t%d\n", getpid(), p);
  }
}
