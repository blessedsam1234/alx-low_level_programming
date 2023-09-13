#include "main.h"
/**
 * _is alpha - checks for alphabetic characters
 * @C: the characters to be checked
 * Return: 1 for alphabets and 0 for anything else
 */
int _isalpha(int C)
{
if ((C >= 65 && C <= 97) || (C >= 97 && C <= 122))
{
return (1);
}
return (0);
}
