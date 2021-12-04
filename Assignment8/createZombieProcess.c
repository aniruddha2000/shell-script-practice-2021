#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int pid = fork();

  if (pid > 0)
    sleep(60);
  else if (pid == 0)
  {
    printf("Zombie Process Created Successfully!");
    exit(0);
  }
  else
    printf("Sorry! Child Process cannot be created...");

  return 0;
}
