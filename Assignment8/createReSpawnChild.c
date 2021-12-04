#include <unistd.h>
#include <sys/wait.h>

int hg = 0;

int main()
{
  pid_t parent, child;
  parent = fork();
  if (parent == 0)
  {
    hg++;
    while (hg)
    {
      hg = 0;
      parent = fork();
      if (parent == 0)
      {
        hg++;
      }
      else
      {
        wait(NULL);
      }
    }
  }
  return 0;
}
