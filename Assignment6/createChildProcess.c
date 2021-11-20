#include <stdio.h>
#include <unistd.h>
void main()
{
	pid_t p;
	p = fork();

	if (p == 0)
	{
		printf("In child process,\tpid:\t%d", getpid());
	}
}
