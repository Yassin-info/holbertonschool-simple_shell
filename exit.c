#include "main.h"
/**
* handle_exit - Handles the exit functionality
* @input: Input value to handle
* @exit_status: Exit status of the code
*/
void handle_exit(char *input, int exit_status)
{
	if (input)
		free(input);
	exit(exit_status);
}

