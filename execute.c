#include "mesh.h"

/*
 * execute - Executes a given program
 * @tokens: An array of command and arguments
 */
void execute(char **tokens)
{
	int ex;
	pid_t child = fork();

	if (child == 0)
	{
		ex = execve(tokens[0], tokens, environ);
		
		if (ex == -1)
			perror("Execution error");
	}
	else
	{
		wait(NULL);
		_getline();
	}
}
