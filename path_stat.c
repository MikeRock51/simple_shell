#include "mesh.h"

/*
 * path_stat - Prepares user command for execution.
 * @token: User command to prepare.
 * @tokens: Arguments to command.
 */
void path_stat(char *token, char **tokens)
{
	struct stat status;
	char *env, *key = "PATH", *path;
	int i = 0;

	while (environ[i])
		i++;

	env = malloc(sizeof(char*) * i);

	i = 0;
	while (environ[i])
	{
		if (_strncmp(environ[i], key, 4) == 0)
		{
			env = _strdup(environ[i]);
			break;
		}
		i++;
	}
	env = strtok(env, "="),	env = strtok(NULL, "="), env = strtok(env, ":");
	while (env)
	{
		path = malloc(sizeof(char*) * strlen(env) + strlen(token) + 1);
		strcat(path, env), strcat(path, "/"), strcat(path, token);
		if (stat(path, &status) == 0)
		{
			tokens[0] = path;
			execute(tokens);
		}
		env = strtok(NULL, ":");
	}
	perror("No such command");
	_getline();
}
