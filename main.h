#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>

/**
* struct builtin_s - Structure to map builtin command names to functions
* @name: Name of the builtin command
* @func: Function to execute the builtin
*/
typedef struct builtin_s
{
	char *name;
	int (*func)(char **argv, char **env, char *line, int last_status);
} builtin_t;

ssize_t _getline(char **lineptr, size_t *n, int fd);
char *_strtok(char *str, const char *delim);
pid_t fork(void);
pid_t wait(int *status);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strcpy(char *dest, char *src);
char **stock_args(char *line);
int is_delim(char c, const char *delim);
char *_strdup(char *str);
int main(int ac, char **av, char **env);
int execute(char **argv, char **env);
char *_which(char *filename, char **env);
int _check_direct_path(char *filename);
char *_extract_path(char **env);
char *_search_in_path(char *path_str, char *filename);
int _strncmp(const char *s1, const char *s2, size_t n);
int handle_builtin(char **argv, char **env, char *line, int last_status);
void free_argv(char **argv);
int is_interactive(void);
ssize_t get_input_line(char **line, size_t *len);
int shell_loop(char **env, char *progname, int *exit_status);
int handle_builtin_or_execute(char **argv, char **env, char *progname,
	char *line, int *exit_status);
int _is_number(char *str);
int builtin_exit(char **argv, char **env, char *line, int last_status);
int builtin_env(char **argv, char **env, char *line, int last_status);

#endif
