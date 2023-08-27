#include "monty.h"

/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	FILE *file;
	char *content;
	size_t size;
	ssize_t read_line;
	stack_t *stack;
	unsigned int counter;

	if (argc != 2)


	{
	fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	content = NULL;
	read_line = getline(&content, &size, file);
	counter++;

	while (read_line > 0)
	{
		if (read_line > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
		content = NULL;
		read_line = getline(&content, &size, file);
		counter++;
	}

	free_stack(stack);
	fclose(file);

	return (0);
}
