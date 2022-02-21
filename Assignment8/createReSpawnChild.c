#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

// int main(void)
// {
//   pid_t pid = fork();

//   if (pid == 0)
//   {
//     printf("Process created PID: %d\n", getpid());
//   }
//   else
//   {
//     // sleep(5);
//     kill(pid, SIGTERM);
//     printf("Process killed\n");
//   }

//   int status;
//   pid_t result = waitpid(pid, &status, WNOHANG);
//   if (result == 0)
//   {
//     printf("Child is still alive\n");
//   }
//   else if (result == -1)
//   {
//     printf("There is something wrong\n");
//   }
//   else
//   {
//     printf("Child process exited\n");
//   }
// }

void main()
{
  pid_t p;
  printf("Parent Process PID: %d\n", getpid());
  int i;
  for (i = 0; i < 10; i++)
  {
    p = fork();
    if (p == 0)
    {
      printf("New child Process running with PID: %d\n", getpid());
      sleep(2);
      printf("Current Child Process ends.\n");

      return;
    }
    else
    {
      wait(NULL);
    }
  }
}
