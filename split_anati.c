#include "anati.h"

/**
 * split_token - splits tokens in command line
 * @line_tk: content to be splitted
 * @arg_anati: arguments to use
 * Return: nothing
 */

void split_token(char *line_tk, char **arg_anati)
{
	char *toks;
	int ac = 0;

	toks = strtok(line_tk, " \n");
	while (toks != NULL)
	{
		arg_anati[ac] = toks;
		toks = strtok(NULL, " \n");
		ac++;
	}
	arg_anati[ac] = NULL;
}
