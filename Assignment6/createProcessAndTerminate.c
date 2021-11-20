#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>

void main()
{
  pid_t parentProcess, chidProcess1, chidProcess2, chidProcess3;
  parentProcess = fork();
  if (parentProcess == 0)
  {
    printf("Parent Process ID: %d\n", getpid());
    chidProcess1 = fork();
    if (chidProcess1 == 0)
    {
      printf("Child Process 1 ID: %d\n", getpid());
      chidProcess2 = fork();
      if (chidProcess2 == 0)
      {
        printf("Child Process 2 ID: %d\n", getpid());
        chidProcess3 = fork();
        if (chidProcess3 == 0)
        {
          printf("Child Process 3 ID: %d\n", getpid());
        }
        else
        {
          sleep(2);
          kill(chidProcess3, SIGTERM);
          printf("Child Process 3 killed\n");
        }
      }
      else
      {
        sleep(3);
        kill(chidProcess2, SIGTERM);
        printf("Child Process 2 killed\n");
      }
    }
    else
    {
      sleep(4);
      kill(chidProcess1, SIGTERM);
      printf("Child Process 1 killed\n");
    }
  }
  else
  {
    sleep(5);
    kill(parentProcess, SIGTERM);
    printf("Parent killed\n");
  }
}
