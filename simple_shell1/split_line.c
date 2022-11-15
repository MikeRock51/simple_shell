#include "mesh.h"

char **split_line(char *line)
{
	char **tokens;
	size_t capacity = 20, i = 0;
	char *delimiter = " \n", *token;

	tokens = malloc(sizeof(char*) * capacity);
	if (tokens == NULL)
	{
		perror("malloc failed");
		return (NULL);
	}

	token = strtok(line, delimiter);
	tokens[i] = path_stat(token);
	i++;
	while (token)
	{
		tokens[i] = token;
		i++;

		if (i >= capacity)
		{
			capacity *= 2;
			token = realloc(tokens, capacity);
		}
		token = strtok(NULL, delimiter);
	}
	tokens[i] = NULL;
	return (tokens);
}
