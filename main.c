#include "mesh.h"

int main(void)
{
	char *command, *cmd;
	char **split;
	int i = 0;

	printf("$ ");
	command = _getline();

	cmd = malloc(sizeof(char*) * strlen(command));
	if (cmd == NULL)
	{
		perror("malloc fail");
		return (1);
	}

	strcpy(cmd, command);
	split = split_line(cmd);

	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}

	return (0);
}
