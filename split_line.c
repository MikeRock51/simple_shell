#include "mesh.h"

/*
 * split_line - Breaks command into different strings using a delimiter
 * @cmd: command to split
 *
 */
char **split_line(char *cmd)
{
	char **tokens = NULL, *token = NULL, *cmd_cpy = malloc(sizeof(char) * _strlen(cmd)), *delim = " \n";
	int argc = 0, i = 0;

	_strcpy(cmd_cpy, cmd);

	token = strtok(cmd_cpy, delim);
	while(token)
	{
		argc++;
		token = strtok(NULL, delim);
	}

	tokens = malloc(sizeof(char *) * argc);
	token = _strdup(cmd);
	token = strtok(token, delim);

	while (token)
	{
		tokens[i] = malloc(sizeof(char) * strlen(token));
		tokens[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	tokens[i] = NULL;

	if (tokens[0][0] == '/')
		execute(tokens);
	else
		path_stat(tokens[0], tokens);
	return (tokens);
}
