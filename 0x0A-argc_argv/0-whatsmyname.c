#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

