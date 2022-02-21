/*
4.a) Write a program to create a child process, which execute an already compiled factorial program.
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main() {
  pid_t pid;
  int status;
  char s[100];
  printf("enter number for factorial: ");
  scanf("%s", s);
  char *argv[] = {"factorial", s, NULL};
  char *envp[] = {NULL};
  pid = fork();
  if (pid == 0) {
    execve("factorial", argv, envp);
  } else {
    wait(&status);
  }
  return 0;
}
