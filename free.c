#include "main.h"
/**
* free_all - frees all malloc'd space at end of main loop
* @tokens: pointer to tokens array 
* @path: pointer to path variable
* @line: pointer to user input buffer
* @fullpath: pointer to full path
* @flag: flag marking if full_path was malloc'd
* Return: void
*/
void free_all(char **tokens, char *path, char *line, char *fullpath, int flag)
{
	free(path);
	free(tokens);
	free(line);
	if (flag == 1)
		free(fullpath);
}

/**
* free_dp - free double pointer
* @array: double pointer to free
* @length: length of double pointer
* Return: void
*/
void free_dp(char **array, unsigned int length)
{
	unsigned int i;

	i = 0;
	while (i < length)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

/**
* errors - prints errors based on case
* @error: error number associated with perror statement
* Return: void
*/
void errors(int error)
{
	if (error == 1)
	{
		write(STDERR_FILENO, ERR_FORK, _strlen(ERR_FORK));
		perror("Error");
	}
	else if (error == 2)
	{
		perror("Error");
	}
	else if (error == 3)
	{
		write(STDERR_FILENO, ERR_MALLOC, _strlen(ERR_MALLOC));
	}
	else if (error == 4)
	{
		write(STDERR_FILENO, ERR_PATH, _strlen(ERR_PATH));
	}
	else
	{
		return;
	}
}
