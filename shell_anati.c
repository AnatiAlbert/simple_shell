#include "anati.h"

/**
 * main - imitates a shell program.
 * @ac: count of command line arguments.
 * @av: array of command line arguments.
 * Return: 0
 */

int main(int ac, char **av)
{
	int anati = 1;
	ssize_t byt_anati;
	size_t buf_anati = 0;
	char *line_anati = NULL;
	int i;
	char *args[256];


	while (anati)
	{
		write(1, PROMPT, strlen(PROMPT));

		byt_anati = getline(&line_anati, &buf_anati, stdin);
		if (byt_anati == -1)
		{
			perror("./hsh");
			return (-1);
		}

		split_token(line_anati, args);

		for (i = 0; i < ac && args[i] != NULL; ++i)
		{
			args[i + ac] = av[i];
		}

		exec_anati(args);
	}

	clean_anati(line_anati);
	return (0);
}
