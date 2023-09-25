#include "main.h"
/**
 * _memcpy - main function prototype
 * @n: function copies
 * @dest: destination parameter
 * @src: bytes from memory area
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
