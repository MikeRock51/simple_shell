#include "mesh.h"

char *_getline()
{
	size_t n = 0;
	char *line = NULL;
	ssize_t cmd;

	cmd = getline(&line, &n, stdin);
	if (cmd == -1)
	{
		perror("getline failed");
		return (NULL);
	}

	return (line);	
}
