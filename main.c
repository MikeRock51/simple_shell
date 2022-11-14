#include "mesh.h"

int main(void)
{
	char *command, *cmd;
	char **split;
	/*int i = 0;*/

	while (1)
	{
		printf("$ ");
		command = _getline();

		if (strcmp(command, "exit") == 0)
			return (0);

		cmd = malloc(sizeof(char*) * strlen(command));
		if (cmd == NULL)
		{
			perror("malloc fail");
			return (1);
		}

		strcpy(cmd, command);
		split = split_line(cmd);

		if (split[0] != NULL)
			execute(split);

	}
	return (0);
}
