#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

#define BUFFER 1024
#define TRUE 1
#define PROMPT "#cisfun$ "
#define ERR_MALLOC "Unable to malloc space\n"
#define ERR_FORK "Unable to fork and create child process\n"
#define ERR_PATH "No such file or directory\n"
extern char **environ;

/**
* struct list_s - linked list of variables
* @value: value
* @next: pointer to next node
* Description: generic linked list struct for variables.
*/
typedef struct list_s
{
	char *value;
	struct list_s *next;
} list_s;

/**
* struct built_s - linked list of builtins
* @name: name of builtin
* @p: pointer to function
* Description: struct for builtin functions.
*/
typedef struct built_s
{
	char *name;
	int (*p)(void);
} built_s;

void prompt(int fd, struct stat buf);
char *_getline(FILE *fp);
char **tokenizer(char *str);
char *_which(char *command, char *fullpath, char *path);
int child(char *fullpath, char **tokens);
void errors(int error);
void _puts(char *str);
int _strlen(char *s);
int _strcmp(char *name, char *variable, unsigned int length);
int _strncmp(char *name, char *variable, unsigned int length);
char *_strcpy(char *dest, char *src);
int shell_env(void);
int shell_exit(void);
int builtin_execute(char **tokens);
int shell_num_builtins(built_s builtin[]);
char *_getenv(const char *name);
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag);

#endif
