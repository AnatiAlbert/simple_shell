#include "anati.h"

/**
 * exec_anati - executes the command line commands
 * @arg_anati: to handle arguments
 * Return: nothing
 */

void exec_anati(char **arg_anati)
{
	pid_t child_anati;
	int status;

	child_anati = fork();
	if (child_anati == -1)
	{
		perror("./hsh");
		return (-1);
	}

	if (child_anati == 0)
	{
		if (execve(arg_anati[0], arg_anati, environ) == -1)
		{
			perror("./hsh");
			return (-1);
		}
	}
	else
	{
		wait(&status);
	}
}
