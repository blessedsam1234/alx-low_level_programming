#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c:The characte to be checked
 * Return: 1 for digit characte or 0 for anything else
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
