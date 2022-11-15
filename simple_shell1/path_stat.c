#include "mesh.h"

char *path_stat(char *cmd)
{
	struct stat st;
	char *key = "PATH", *env = NULL, *path = NULL; 
	int i = 0;

	while (environ[i])
		i++;

	env = malloc(sizeof(char) * 4);
	i = 0;
	while (environ [i])
	{
		if (strncmp(environ[i], key, 4) == 0)
		{
			env = environ[i];
			break;
		}
		i++;
	}

	env = strtok(env, 
	path = malloc(sizeof(char) * strlen(env) - 5);
	strtok(env, "=");

	path = strtok(NULL, "=");

	path = strtok(path, ":");

	printf("Before: %s\n", path);

	while (path)
	{
		printf("During: %s\n", path);
		if (stat(path, &st) == 0)
		{
			return (path);
		}
		path = strtok(NULL, ":");
	}
	perror("Command doesn't exist");
	return (NULL);}
