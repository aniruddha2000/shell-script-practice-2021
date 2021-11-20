#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
void main()
{
	pid_t p;

	printf("pid of main program:\t%d\n", getpid());
	p = fork();

	if (p == 0)
	{
		printf("In child 1 process,\tpid:\t%d,\tppid:\t%d\n", getpid(), getppid());
	}
	else
	{
		printf("In parent from child 1,\t\tpid:\t%d,\tfork returned:\t%d\n", getpid(), p);
	}
}
