#include "mesh.h"

void execute(char **path)
{
	int ex, i = 0;
	pid_t child = fork();

	if (child == 0)
	{
		ex = execve(path[0], path, NULL);
		if (ex == -1)
		{
			while (path[i])
			{
				printf("%s\n", path[i]);
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
