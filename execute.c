#include "mesh.h"

void execute(char **path, char **args)
{
	int ex, i = 0;
	pid_t child = fork();

	if (child == 0)
	{
		ex = execve(path[0], args, environ);
		if (ex == -1)
		{
			while (args[i])
			{
				printf("%s\n", args[i]);
				i++;
			}
			perror("Execution error");
		}
	}
	else
	{
		wait(NULL);
	}
}
