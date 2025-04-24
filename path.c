#include "main.h"
/**
* concat_path - Concatenates directory and command
* @dir: Directory path
* @command: Command name
*
* Return: Full path or NULL on failure
*/
char *concat_path(char *dir, char *command)
{
	int dir_len, cmd_len;
	char *full_path;

	if (!dir || !command)
		return (NULL);

	dir_len = _strlen(dir);
	cmd_len = _strlen(command);

	full_path = malloc(dir_len + cmd_len + 2);
	if (!full_path)
		return (NULL);

	_strcpy(full_path, dir);
	if (dir[dir_len - 1] != '/')
	{
		full_path[dir_len] = '/';
		dir_len++;
	}
	_strcpy(full_path + dir_len, command);

	return (full_path);
}

