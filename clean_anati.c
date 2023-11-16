#include "anati.h"

/**
 * clean_anati - clears memory in code
 * @line_anati: string memory to released
 * Return: nothing
 */

void clean_anati(char *line_anati)
{
	free(line_anati);
}
