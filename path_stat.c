#include "mesh.h"

char **path_stat(char *cmd)
{
	struct stat st;
	char *key = "PATH", *env = NULL, *path = NULL, *bs_path = malloc(sizeof(char*) * strlen(cmd) + 1), *argv[1]; 
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

	path = malloc(sizeof(char) * strlen(env) - 5);
	strtok(env, "=");

	path = strtok(NULL, "=");

	path = strtok(path, ":");

	bs_path = strcat("/", *cmd);

	while (path)
	{
		if (stat(strcat(path, bs_path), &st) == 0)
		{
			argv[0] = path;
			return (argv);
		}
		path = strtok(path, ":");
	}
	perror("File doesn't exist");
}
