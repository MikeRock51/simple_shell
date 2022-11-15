#ifndef _MESH_H_
#define _MESH_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;

char *_getline();
char **split_line(char *cmd);
void execute(char **tokens);
void path_stat(char *token, char **tokens);

#endif
