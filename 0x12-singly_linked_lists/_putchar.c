#include <unistd.h>

/**
 * _putchar - writes the character "c" to the standard output
 * @c: the character to be printed
 * Return: 1
 * when there is an error, return -1 and error is appropriately set
 */

int _putchar(char c)
{
	return(write(1, &c, 1));

}


