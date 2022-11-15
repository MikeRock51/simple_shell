#include "mesh.h"

/*
 * getline - Reads user command from stdin.
 *
 * Return: Command Read.
 */
char *_getline()
{
	char *cmd = NULL;
	size_t n = 0;
	ssize_t stat;

	printf("sam_mesh $ ");
	stat = getline(&cmd, &n, stdin);
	
	if (stat == -1)
	{
		perror("Error:");
		exit(1);
	}

/*	if (strcmp(cmd, "exit") == 0)
		exit(0);
		*/

	split_line(cmd);
	return (cmd);
}
